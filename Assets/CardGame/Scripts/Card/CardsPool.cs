using UnityEngine;

public class CardsPool : Singleton<CardsPool>
{
    public Card cardPrefab;
    public int initialPoolSize = 20;

    private ObjectPool<Card> _pool;

    private void Start()
    {
        _pool = new ObjectPool<Card>(cardPrefab, initialPoolSize, this.transform);
    }

    public Card Spawn()
    {
        Card p = _pool.Get();
        return p;
    }

    public void Release(Card card)
    {
        _pool.Release(card);
    }
}
