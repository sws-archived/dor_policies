<?php
/**
 * @file
 * dor_policies.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function dor_policies_taxonomy_default_vocabularies() {
  return array(
    'policy_tags' => array(
      'name' => 'Policy Tags',
      'machine_name' => 'policy_tags',
      'description' => 'Free tagging for policy',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
