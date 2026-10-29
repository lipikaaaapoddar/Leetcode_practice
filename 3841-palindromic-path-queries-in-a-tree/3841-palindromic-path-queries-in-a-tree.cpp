class Solution {
public:
    vector<bool> palindromePath(int n, vector<vector<int>>& edges,
                                string s, vector<string>& queries) {
        vector<vector<int>> adj(n);
        for (auto &e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }

        vector<int> parent(n, -1), depth(n, 0);
        vector<int> sz(n, 1), heavy(n, -1);
        vector<int> head(n), pos(n);
        int timer = 0;

        function<void(int,int)> dfs = [&](int u, int p) {
            parent[u] = p;
            int mx = 0;

            for (int v : adj[u]) {
                if (v == p) continue;
                depth[v] = depth[u] + 1;
                dfs(v, u);
                sz[u] += sz[v];

                if (sz[v] > mx) {
                    mx = sz[v];
                    heavy[u] = v;
                }
            }
        };

        function<void(int,int)> decompose = [&](int u, int h) {
            head[u] = h;
            pos[u] = timer++;

            if (heavy[u] != -1)
                decompose(heavy[u], h);

            for (int v : adj[u]) {
                if (v == parent[u] || v == heavy[u])
                    continue;
                decompose(v, v);
            }
        };

        dfs(0, -1);
        decompose(0, 0);

        vector<int> seg(4 * n, 0);

        function<void(int,int,int)> build = [&](int idx, int l, int r) {
            if (l == r) {
                seg[idx] = 1 << (s[find(pos.begin(), pos.end(), l) - pos.begin()] - 'a');
                return;
            }

            int mid = (l + r) / 2;
            build(idx * 2, l, mid);
            build(idx * 2 + 1, mid + 1, r);
            seg[idx] = seg[idx * 2] ^ seg[idx * 2 + 1];
        };

        // Build the linearized array.
        vector<int> base(n);
        for (int u = 0; u < n; u++)
            base[pos[u]] = 1 << (s[u] - 'a');

        function<void(int,int,int)> buildSeg =
            [&](int idx, int l, int r) {
                if (l == r) {
                    seg[idx] = base[l];
                    return;
                }
                int mid = (l + r) / 2;
                buildSeg(idx * 2, l, mid);
                buildSeg(idx * 2 + 1, mid + 1, r);
                seg[idx] = seg[idx * 2] ^ seg[idx * 2 + 1];
            };

        function<void(int,int,int,int,int)> update =
            [&](int idx, int l, int r, int p, int val) {
                if (l == r) {
                    seg[idx] = val;
                    return;
                }

                int mid = (l + r) / 2;
                if (p <= mid)
                    update(idx * 2, l, mid, p, val);
                else
                    update(idx * 2 + 1, mid + 1, r, p, val);

                seg[idx] = seg[idx * 2] ^ seg[idx * 2 + 1];
            };

        function<int(int,int,int,int,int)> query =
            [&](int idx, int l, int r, int ql, int qr) -> int {
                if (ql <= l && r <= qr) return seg[idx];
                if (r < ql || qr < l) return 0;

                int mid = (l + r) / 2;
                return query(idx * 2, l, mid, ql, qr) ^
                       query(idx * 2 + 1, mid + 1, r, ql, qr);
            };

        buildSeg(1, 0, n - 1);

        auto pathXor = [&](int u, int v) {
            int mask = 0;

            while (head[u] != head[v]) {
                if (depth[head[u]] < depth[head[v]])
                    swap(u, v);

                mask ^= query(1, 0, n - 1, pos[head[u]], pos[u]);
                u = parent[head[u]];
            }

            if (depth[u] > depth[v])
                swap(u, v);

            mask ^= query(1, 0, n - 1, pos[u], pos[v]);
            return mask;
        };

        vector<bool> ans;

        for (string &q : queries) {
            stringstream ss(q);
            string type;
            int u, v;
            ss >> type >> u;

            if (type == "update") {
                char c;
                ss >> c;
                s[u] = c;
                update(1, 0, n - 1, pos[u], 1 << (c - 'a'));
            } else {
                ss >> v;
                int mask = pathXor(u, v);
                ans.push_back((mask & (mask - 1)) == 0);
            }
        }

        return ans;
    }
};