<?php

/**
 * @file
 * Default Taxonomy Terms for Job Skills.
 */

// Create the Taxonomy Terms for Job Skills.
$job_skills = array(
  array(
    'name' => 'Taco Bell',
    '#children' => array(
      array(
        'name' => 'Associate',
      ),
    ),
  ),
  array(
    'name' => 'Albertson\'s',
    '#children' => array(
      array(
        'name' => 'Associate',
      ),
    ),
  ),
  array(
    'name' => 'Wal-Mart',
    '#children' => array(
      array(
        'name' => 'Associate',
      ),
    ),
  ),
  array(
    'name' => 'Home Depot',
    '#children' => array(
      array(
        'name' => 'Cashier',
      ),
      array(
        'name' => 'Head Cashier',
      ),
      array(
        'name' => 'Outside Garden',
      ),
      array(
        'name' => 'Appliance Sales',
      ),
      array(
        'name' => 'Department Head',
        '#children' => array(
          array(
            'name' => 'Outside Garden',
          ),
          array(
            'name' => 'Operations Manager',
          ),
        ),
      ),
    ),
  ),
);

$vocabulary = taxonomy_vocabulary_machine_name_load('test_job_titles');
drupal_set_message(
  t('Deleting terms from @vocabulary_name if term exists.',
    array(
      '@vocabulary_name' => $vocabulary->name,
    ),
    'status', FALSE)
  )
);
foreach (taxonomy_get_tree($vocabulary->vid) as $term) {
  drupal_set_message(t('Deleting term: @term', array('@term' => $term));
  drupal_set_message(
    t('(If null or blank, no terms currently exist for @vocabulary )',
      array('@vocabulary' => $vocabulary)
    )
  );
  taxonomy_term_delete($term->tid);
}

// Create all terms.
test_d7_deploy_taxonomy_builder($job_skills, $vocabulary->vid);
