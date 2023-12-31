
public class PlayerMovement : MonoBehaviour
{
    public float moveSpeed;

    public Rigidbody2D rb;
    
    private Vector2 MoveDirection;

    // Update is called once per frame
    void Update()
    {
        // Processing Inputs
        ProcessInputs();
    }

    void FixedUpdate()
    {
        // Physics Calculations are done here
        Move();
    }

    void ProcessInputs()
    {
        float moveX = Input.GetAxisRaw("Horizontal");
        float moveY = Input.GetAxisRaw("Vertical");

        MoveDirection = new Vector2(moveX, moveY).normalized;
    }
    
    void Move()
    {
        rb.velocity = new Vector2(MoveDirection.x * moveSpeed, MoveDirection.y * moveSpeed);
    }

}