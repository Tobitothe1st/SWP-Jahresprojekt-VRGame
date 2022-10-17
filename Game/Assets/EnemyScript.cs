using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class EnemyScript : MonoBehaviour
{
    public Transform Player;
    public Transform Enemy;
    public int triggerDistance;
    public int stopDistance;
    public float speed;
    public Animator anim;
    private bool attack;
    
    
    
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if ((Vector3.Distance(Player.position, Enemy.position) < triggerDistance && Vector3.Distance(Player.position, Enemy.position) > stopDistance) && 
            (Vector3.Distance(Player.position, Enemy.position) > -triggerDistance && Vector3.Distance(Player.position, Enemy.position) > -stopDistance))
        {
            Vector3 floor = new Vector3(Player.position.x, Player.position.y - 1, Player.position.z);
            Enemy.position = Vector3.MoveTowards(Enemy.position, floor, speed * Time.deltaTime);
            anim.Play("Walk Forward");
            attack = false;

            if(Vector3.Distance(Player.position, Enemy.position) < stopDistance && Vector3.Distance(Player.position, Enemy.position) > -stopDistance)
            {
                attack = true;
                do
                {
                    switch(Random.Range(0, 3))
                    {
                        case 1:
                            anim.Play("Attack1");
                            break;
                        case 2:
                            anim.Play("Attack2");
                            break;
                        case 3:
                            anim.Play("Attack3");
                            break;
                    }
                } while (attack);
            }
        }
    }
}
