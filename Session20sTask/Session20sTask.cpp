/*
Ahmed AbdelAziz
Robotics Corner
Task Session 20:
Queue (Circular)
*/

#include <iostream>
// Q (TASK) (task.exe)
template <typename T>
class Q
{
private:
    int front, rear;
    int size;
    T *arr;
 
public:
    // Constructor.
    Q(int s) : front(-1), rear(-1), size(s), arr(new T[s]) {}
    // Pushing.
    void push(T e)
    {
        if ((front == 0 && rear == size - 1) || ((rear + 1) % size == front))
        {
            std::cout << "Queue is Full!!" << std::endl;
        }

        else if (front == -1) // first Element.
        {
            front = rear = 0;
            arr[rear] = e;
        }

        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
            arr[rear] = e;
        }
        else
        {
            rear++;
            arr[rear] = e;
            //  std::cout << "rear: " << rear << " item rear: " << item[rear] << std::endl;
            // std::cout << "front: " << front << " item front: " << item[front] << std::endl;
        }
    }

    // Popping.
    void pop()
    {
        if (front == -1)
        {
            std::cout << "Queue is Empty!!" << std::endl;
        }
        else
        {
            /*std::cout << "Element Popped is: " << item[front] << std::endl;
            front = (front + 1) % (Max_size + 1);*/
            //  std::cout << "rear: " << rear << " item rear: " << item[rear] << std::endl;
            // std::cout << "front: " << front << " item front: " << item[front] << std::endl;
        }

        T temp = arr[front];
        arr[front] = -1;
        if (front == rear)
        {
            front = rear = -1;
        }
        else if (front == size - 1)
        {
            front = 0;
        }
        else
        {
            front++;
            std::cout << "Item Popped is: " << temp << std::endl;
        }
    }
    void pop(T &e)
    {
        if (front == -1)
        {
            std::cout << "Queue is Empty!!" << std::endl;
        }
        else
        {
            /*std::cout << "Element Popped is: " << item[front] << std::endl;
            front = (front + 1) % (Max_size + 1);*/
            //  std::cout << "rear: " << rear << " item rear: " << item[rear] << std::endl;
            // std::cout << "front: " << front << " item front: " << item[front] << std::endl;
        }

        e = arr[front];
        //std::cout << "front: " << front << std::endl;
        arr[front] = -1;
        //std::cout << "arr[front]=-1: " << front << std::endl;
        if (front == rear)
        {
            front = rear = -1;
        }
        else if (front == size - 1)
        {
            front = 0;
        }
        else
        {
            front++;
            std::cout << "Item Popped is: " << e << std::endl;
        }
    }
    // Getting.
    void getfront(T &Qf)
    {
        if (front != -1)
        {
            Qf = arr[front];
            std::cout << Qf << std::endl;
        }
        else
        {
            std::cout << "Queue is Empty!!" << std::endl;
        }
    }
    // Display.
    void display()
    {
        if (front == -1)
        {
            std::cout << "Queue is Empty!!" << std::endl;
        }
        if (front <= rear)
        {
            std::cout << "[ ";
            for (int i = front; i <= rear; i++)
            {
                std::cout << arr[i] << " ";
            }
            std::cout << "]" << std::endl;
        }
        else
        {
            std::cout << "[ ";
            for (int i = front; i < size; i++)
            {
                std::cout << arr[i] << " ";
            }
            for (int i = 0; i <= rear; i++)
            {
                std::cout << arr[i] << " ";
            }
            std::cout << "]" << std::endl;
        }
    }
};
int main()
{
    // Q(Task) (task.exe)
    Q<int> q(7);
    // Push & Display
    q.push(0);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.display();
    // Pop and display.
    q.pop();
    q.display();
    // Pointer Pop & Dispaly
    int x = 0;
    q.pop(x);
    std::cout << "x = " << x << std::endl;
    q.display();
    // Getting Front.
    std::cout << "Getfront: ";
    q.getfront(x);
    // Circular test
    q.push(8);
    q.pop();
    q.pop();
    q.display();
    q.push(9);
    q.push(10);
    q.display();
    q.push(11);
    q.push(12);
    q.push(13);
    q.display();
}