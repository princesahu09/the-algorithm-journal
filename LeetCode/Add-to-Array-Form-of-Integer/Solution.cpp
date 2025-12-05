        for i in range(len(A) - 1, -1, -1):
            if not K: break
            K, A[i] = divmod(A[i] + K, 10)
        while K:
            K, a = divmod(K, 10)
            A = [a] + A
        return A