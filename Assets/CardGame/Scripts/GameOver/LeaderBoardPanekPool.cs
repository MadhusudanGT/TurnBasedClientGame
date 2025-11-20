using UnityEngine;

public class LeaderBoardPanekPool : Singleton<LeaderBoardPanekPool>
{
    public PlayerLeaderBoard prefab;
    public int initialPoolSize = 3;

    private ObjectPool<PlayerLeaderBoard> _pool;

    private void Start()
    {
        _pool = new ObjectPool<PlayerLeaderBoard>(prefab, initialPoolSize, this.transform);
    }

    public PlayerLeaderBoard Spawn()
    {
        PlayerLeaderBoard p = _pool.Get();
        return p;
    }

    public void Release(PlayerLeaderBoard card)
    {
        _pool.Release(card);
    }
}
