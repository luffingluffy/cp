// Determine if vertex i is connected to j, directly or indirectly.
for (int k = 0; k < V; ++k)
    for (int i = 0; i < V; ++i)
        for (int j = 0; j < V; ++j)
            AM[i][j] |= (AM[i][k] & AM[k][j]);