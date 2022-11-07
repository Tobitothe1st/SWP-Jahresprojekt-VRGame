using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class EnemyScript : MonoBehaviour
{
    public Transform Player;
    public Transform Enemy;
    public int triggerDistance;
    public int runningDistance;
    public int stopDistance;
    public float speed;
    public Animator anim;
    public int run;
    private bool animationFinished;
    private float finished;
    
    
    
    // Start is called before the first frame update
    void Start()
    {
        InvokeRepeating("Attack", 2, 2);
    }

    // Update is called once per frame
    void Update()
    {
        
        if ((Vector3.Distance(Player.position, Enemy.position) < triggerDistance && Vector3.Distance(Player.position, Enemy.position) > stopDistance) && 
            (Vector3.Distance(Player.position, Enemy.position) > -triggerDistance && Vector3.Distance(Player.position, Enemy.position) > -stopDistance))
        {
            Vector3 floor = new Vector3(Player.position.x, Player.position.y - 1, Player.position.z);
            Enemy.position = Vector3.MoveTowards(Enemy.position, floor, speed * Time.deltaTime);
            Enemy.LookAt(Player.position);
            anim.Play("Walk Forward");

            Vector3 lookVector = Player.transform.position - transform.position;
            lookVector.y = transform.position.y;
            Quaternion rot = Quaternion.LookRotation(lookVector);
            transform.rotation = Quaternion.Slerp(transform.rotation, rot, 1);
        }

        if ((Vector3.Distance(Player.position, Enemy.position) < runningDistance && Vector3.Distance(Player.position, Enemy.position) > triggerDistance) &&
            (Vector3.Distance(Player.position, Enemy.position) > -runningDistance && Vector3.Distance(Player.position, Enemy.position) > -triggerDistance))
        {
            Vector3 floor = new Vector3(Player.position.x, Player.position.y - 1, Player.position.z);
            Enemy.position = Vector3.MoveTowards(Enemy.position, floor, run * Time.deltaTime);
            Enemy.LookAt(Player.position);
            anim.Play("RunForward");

            Vector3 lookVector = Player.transform.position - transform.position;
            lookVector.y = transform.position.y;
            Quaternion rot = Quaternion.LookRotation(lookVector);
            transform.rotation = Quaternion.Slerp(transform.rotation, rot, 1);
        }



    }

    void Attack()
    {
        if (Vector3.Distance(Player.position, Enemy.position) < stopDistance && Vector3.Distance(Player.position, Enemy.position) > -stopDistance)
        {
            int r = Random.Range(0, 3);
            switch (r)
            {
                case 0:
                    anim.Play("Attack1");
                    break;
                case 1:
                    anim.Play("Attack2");
                    break;
                case 2:
                    anim.Play("Attack3");
                    break;
            }

        }
    }


}
