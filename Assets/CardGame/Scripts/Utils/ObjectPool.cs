using System.Collections.Generic;
using UnityEngine;

public class ObjectPool<T> where T : Component
{
    private readonly T _prefab;
    private readonly Transform _parent;
    private readonly Queue<T> _pool;

    public bool AutoExpand { get; set; } = true;

    public ObjectPool(T prefab, int initialCount, Transform parent = null)
    {
        _prefab = prefab;
        _parent = parent;
        _pool = new Queue<T>();

        Prewarm(initialCount);
    }

    /// <summary>
    /// Pre-instantiate pool items
    /// </summary>
    private void Prewarm(int count)
    {
        for (int i = 0; i < count; i++)
            AddObjectToPool();
    }

    private T AddObjectToPool()
    {
        T obj = Object.Instantiate(_prefab, _parent);
        obj.gameObject.SetActive(false);
        _pool.Enqueue(obj);
        return obj;
    }

    /// <summary>
    /// Get object from pool
    /// </summary>
    public T Get()
    {
        if (_pool.Count == 0)
        {
            if (AutoExpand)
                AddObjectToPool();
            else
                return null;
        }

        T obj = _pool.Dequeue();
        obj.gameObject.SetActive(true);
        return obj;
    }

    /// <summary>
    /// Release object back to pool
    /// </summary>
    public void Release(T obj)
    {
        obj.gameObject.SetActive(false);
        _pool.Enqueue(obj);
    }
}
