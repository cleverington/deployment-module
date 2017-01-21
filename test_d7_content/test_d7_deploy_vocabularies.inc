<?php

/**
 * @file
 * Default Vocabularies for deploying Test Drupal 7 site.
 */

// Define the Vocabularies for Test Drupal 7 site.
$test_vocabularies = array(
  array(
    'name' => t('Job Titles'),
    'description' => t('A list of Job Titles held.'),
    'machine_name' => 'test_job_titles',
  ),
  array(
    'name' => t('Skills'),
    'description' => t('A list of skills to track.'),
    'machine_name' => 'test_career_skills',
  ),
);

// Create the required Vocabularies.
foreach ($test_vocabularies as $new_vocabulary) {
  test_d7_deploy_create_vocabulary($new_vocabulary);
}
