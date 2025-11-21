using UnityEngine;

public class LobbyIconPool : Singleton<LobbyIconPool>
{
    public PlayerIcon prefab;
    public int initialPoolSize = 20;

    private ObjectPool<PlayerIcon> _pool;

    private void Start()
    {
        _pool = new ObjectPool<PlayerIcon>(prefab, initialPoolSize, this.transform);
    }

    public PlayerIcon Spawn()
    {
        PlayerIcon p = _pool.Get();
        return p;
    }

    public void Release(PlayerIcon card)
    {
        _pool.Release(card);
    }
}
