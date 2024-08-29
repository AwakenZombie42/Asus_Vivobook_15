#include <stdio.h>
#include <stdlib.h>

int canCompleteCircuit(int *gas, int gasSize, int *cost, int costSize)
{
    int start_point = 0;
    int curr_gas = 0;
    int total_gas = 0;
    int total_cost = 0;

    for (int i = 0; i < gasSize; i++)
    {
        total_gas += gas[i];
        total_cost += cost[i];
        curr_gas += gas[i] - cost[i];

        if (curr_gas < 0)
        {
            start_point = i + 1;
            curr_gas = 0;
        }
    }

    if (total_gas - total_cost < 0)
        return -1;
    return start_point;
}

int main(void)
{
    int gas[] = {5, 6, 7, 11, 9};
    int cost[] = {1, 2, 3, 10, 5};
    int result = canCompleteCircuit(gas, sizeof(gas) / sizeof(int), cost, sizeof(cost) / sizeof(int));

    if (result == -1)
    {
        printf("Cannot complete the circuit.\n");
    }
    else
    {
        printf("Start point to complete the circuit: %d\n", result);
    }
}