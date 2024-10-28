# Project Euler 031 - Coin Sums

In the United Kingdom the currency is made up of pound (£) and pence (p).  There are eight coins in general circulation:

    1p, 2p, 5p, 10p, 20p, 50p, £1 (100p), and £2 (200p).

It is possible to make £2 in the following way:

    1x£1 + 1x50p + 2x20p + 1x5p + 1x2p + 3x1p

The aim is to find the number of different ways that `n` pence can be made using any number of coins.

Information at [Project Euler 031](https://projecteuler.net/problem=31)

**Hint**

- There are 100 pence in a pound (£1 = 100p)
- There are coins (in pence) that are available: 1, 2, 5, 10, 20, 50, 100, 200
- How many different ways you can combine these values to make n pence
- Use the Dynamic Programming Approach

**Example**

To make 5p there are 4 ways:

    1,1,1,1,1
    1,1,1,2
    1,2,2
    5

## UX

**Getting Started**

Enter the value in pence (between 1 and 1000) as a whole number (e.g. 200 pence for £2).  Unless you have made an invalid input, you will see the value in pence as well as the number of ways to make n pence using any number of coins.  For example, if you entered 50, you would expect to get 451 ways to make 50 pence using any number of coins.  Click on the Submit Button to clear the information or to start again.

**User Stories**

As a user, I expect to get an error message, if I do any of:

- Not enter anything in the input field
- Entering text other than a number
- Entering a value less than 1 or greater than 1000
- Entering a number that is not an integer

As a user, I expect the function `coinSums(50)` to return a number.

As a user, I expect the function `coinSums(50)` to return 451.

As a user, I expect the function `coinSums(100)` to return 4563.

As a user, I expect the function `coinSums(150)` to return 21873.

As a user, I expect the function `coinSums(200)` to return 73682.

**Information Architecture**

The function `coinSums(n)` returns a number, where `n` is a number between 1 and 1000.

## Features

Allows the user to enter the value in pence as well as seeing the number of ways that n pence can be made using any number of coins.  Performs checks on valid user input.  If the input is not valid, an error message is displayed.  Despite the title 'Coin Sums', it can be used for other purposes such as finding the number of ways to make 10 runs in cricket using the scores of 1, 2, 3, 4, 5 and 6 and any number of scoring shots.

## Technologies

Uses HTML5, CSS3, JavaScript, Bootstrap 5.2.0-Beta1 and Google Fonts.  Dynamic Programming Approach.

## Testing

Ensure all user stories have been met.

## Deployment

Deployed on [GitHub Pages](https://derektypist.github.io/project-euler-031) at the main branch.

## Credits

### Content

Written by me.

### Acknowledgements

- [Project Euler](https://projecteuler.net)
- [FreeCodeCamp](https://www.freecodecamp.org)
