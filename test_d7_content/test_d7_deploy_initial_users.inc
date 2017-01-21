<?php

/**
 * @file
 * Default Users for the Test Drupal 7 site.
 */

// Create a random password, users will need to set their own.
$password = user_password(8);

// Available Site Builder Roles.
$builder_roles = array(
  'authenticated user',
  'Site Builder',
  'Site Manager',
);

// Available Site Manager Roles.
$manager_roles = array(
  'authenticated user',
  'Site Builder',
  'Site Manager',
);

// Available Standard User Roles.
$standard_roles = array(
  'authenticated user',
  'Standard User',
);

// Create the Platform-Wide Users.
$test_site_default_users = array(
  array(
    'name' => 'First User',
    // note: do not md5 the password.
    'pass' => $password,
    'mail' => 'first.user@email.com',
    'roles' => $manager_roles,
  ),
  array(
    'name' => 'Second User',
    // note: do not md5 the password.
    'pass' => $password,
    'mail' => 'second.user@email.com',
    'roles' => $standard_roles,
  ),
);

foreach ($test_site_default_users as $default_user) {
  test_d7_deploy_create_user($default_user);
}
