class CardPayment {
  num? amount;
  String? cardNumber;
}

class CashPayment {
  num? amount;
}

String processPayment(dynamic payment, String currency) {
  if (payment is CardPayment) {
    payment
      ..amount = 100
      ..cardNumber = '1234-5678-9012';
  } else if (payment is CashPayment) {
    payment..amount = 100;
  }

  num convertedAmount =
      (payment is CardPayment || payment is CashPayment)
          ? (currency == 'USD' ? payment.amount! * 30 : payment.amount!)
          : 0;

  if (payment is CardPayment) {
    return 'Paid $convertedAmount $currency via Card ending in ${payment.cardNumber!.substring(payment.cardNumber!.length - 4)}';
  } else if (payment is CashPayment) {
    return 'Paid $convertedAmount $currency in Cash';
  } else {
    return 'Unknown payment method';
  }
}

void main() {
  print(processPayment(CardPayment(), 'USD'));
  print(processPayment(CashPayment(), 'EGP'));
  print(processPayment("Paypal", 'USD'));
}
