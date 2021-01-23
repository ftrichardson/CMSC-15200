#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>
#include <stdio.h>
#include <time.h>
#include <math.h>

#include "util.h"
#include "betting.h"


/* YOUR HELPER FUNCTIONS HERE */


/* simulate_game: simulate a single game
 *
 * strategy: the betting strategy to use
 * init_amount: the initial amount of cash on hand
 * num_bets: the maximum number of bets to make
 * unsigned int seed: used to initialize the random number generator
 *
 * Returns: the amount of cash on hand at the end of the game as a double.
 */
double simulate_game(enum betting_strategies strategy, double init_amount,
                     int num_bets, unsigned int seed)
{
    // Do not remove or move this call to srand.  It initializes the
    // random number generator, which should be done exactly once per
    // game.
    srand(seed);

    // YOUR CODE HERE.

    // You are welcome to remove this example use of flip_only
    // or leave it as you choose.
    if (strategy == FLIP_ONLY) {
      flip_only(init_amount, num_bets);
    }


    // REPLACE 0.0 with the appropriate return value
    return 0.0;
}


/* simulate_game: simulate multiple games
 *
 * strategy: the betting strategy to use
 * init_amount: the initial amount of cash on hand
 * num_bets: the maximum number of bets to make
 * init_seed: the initial value used for the random number generator
 *   seed
 * num_games: the number of games to simulate
 *
 * Returns: average amount of cash on hand at the end of the simulated
 *    games as a double
 */
double simulate_multiple_games(enum betting_strategies strategy, double init_amount,
                               int num_bets, unsigned int init_seed, int num_games)
{
    // YOUR CODE HERE
    // Replace 0.0 with an appropriate return value
    return 0.0;
}
