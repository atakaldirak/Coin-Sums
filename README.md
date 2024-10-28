# Project Euler 031 - Coin Sums

Birleşik Krallık'ta para, pound (£) ve pence (p) olarak ikiye ayrılır. Elimizde sekiz adet madeni para bulunmaktadır:

    1p, 2p, 5p, 10p, 20p, 50p, £1 (100p), ve £2 (200p).

Örnek olarak elimizdeki paralarla aşağıdaki gibi £2 yapabiliriz:

    1 adet £1 + 1 adet 50p + 2 adet 20p + 1 adet 5p + 1 adet 2p + 3 adet 1p = £2

Bu problemde bizden istenen kaç adet yolla £2'a ulaşabiliriz.

Projenin detayı sağdaki linkte mevcuttur. [Project Euler 031](https://projecteuler.net/problem=31)

Peki nasıl £2'a ulaşabiliriz ?

- 1 pound 100 pence'den oluşur. (£1 = 100p)
- Elimizde 8 adet pence cinsinden bozuk para var var: 1, 2, 5, 10, 20, 50, 100, 200
- C++ üzerinden yazdığımız kod ile tüm olasılıkları deneyerek kaç adet yolla £2'a ulaşacağımızı hesaplayacağız.


Gerekli kütüphaneleri dahil ediyoruz. iostream, giriş-çıkış işlemleri için kullanılır.

    #include <iostream>
    
 std ad alanını kullanmamızı sağlar. Böylece std::cout ve std::cin yazmak yerine sadece cout ve cin yazabiliriz.
 
    using namespace std;




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
