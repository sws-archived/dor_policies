jQuery(document).ready(function($) {

  var section_path = false;
  var policy_path = false;
  var $policy_options = $('.rph-policies option');

  // Begin by disabling everything
  hide_all_policies();
  $(".goto-rph-submit").attr('disabled','disabled');
  $(".rph-policies").attr('disabled','disabled');

  // This fires when the Sections drop-down changes for any reason
  $(".rph-sections").change(function() {

    section_path = $(this).val();

    // These vars are local to this event
    var policy_counter = 0;
    var parent_id = $(this).find('option[value='+ section_path +']').attr('rel');
    var $policies = $('.rph-policies');

    // By default we hide all policy documents every time the section is changed
    hide_all_policies();

    // If the user selected 'Select a Section' reset the form and exit
    if (section_path === '') {
      policy_path = false;
      return;
    }
    else {
      // Otherwise the submit button can at least take us to the
      // Policy section that was requested
      $(".goto-rph-submit").removeAttr('disabled');

      // Clear out $policies so it can be filled with relevant paths
      $policies.html('<option value selected>Select a Policy</option>');
    }

    // Run through each option and append if it belongs to this Policy section
    $policy_options.each(function() {
      if ($(this).hasClass(parent_id)) {
        $policies.append($(this));
        policy_counter++;
      }
    });

    // If only one policy was found, disable the Policy document drop-down
    if(policy_counter === 0){
      $policies.attr('disabled','disabled');
    }
    else {
      // If any were found, enable drop-down and set to default value
      $policies
        .removeAttr('disabled')
        .val('');
    }
  });

  // This fires when the Policy drop-down changes for any reason
  $(".rph-policies").change(function() {
    policy_path = $(this).val();
  });

  // Finally, redirect when the form is submitted
  $("#goto-rph-form").submit(function() {
    if (policy_path !== false) {
      // Redirect to a Policy document
      window.location = policy_path;
    }
    else if (section_path !== false) {
      // Redirect to a Policy section
      window.location = section_path;
    }

    // If we can't find a Policy section or document, just do nothing
    // @TODO: maybe add a nudge for them to select a section?
    return false;
  });

  /**
   * Helper function to hide all Policy document options and disable form submission
   */
  function hide_all_policies() {
    // Hide all options with a value
    $('.rph-policies')
      .attr('disabled','disabled')  // Disable the form element
      .html($policy_options)        // Reset the data to include all options
      .val('');                     // Reset to the first option

    // Disable submit button
    $('.goto-rph-submit').attr('disabled','disabled');
  }
});
