enum Role { Admin, User, Guest }

class User {
  String? firstName;
  String? lastName;
  Role? role;
}

String formatUser(dynamic inputUser, dynamic inputRole) {
  User user = User();
  user
    ..firstName = inputUser['first']
    ..lastName = inputUser['last'];

  Role role = inputRole is Role ? inputRole : Role.Guest;

  String fullName = (user.firstName ?? 'Unknown') + ' ' + (user.lastName ?? '');

  return 'Name: $fullName, Role: ${role.name}';
}

void main() {
  print(formatUser({'first': 'Sara', 'last': 'Ali'}, Role.Admin));
  print(formatUser({'first': null, 'last': 'Hamed'}, 'something'));
}
