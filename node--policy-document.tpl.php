<?php

/**
 * @file
 * Default theme implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all,
 *   or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct url of the current node.
 * - $display_submitted: Whether submission information should be displayed.
 * - $submitted: Submission information created from $name and $date during
 *   template_preprocess_node().
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - node: The current template type, i.e., "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Blog entry" it would result in "node-blog". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser
 *     listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type, i.e. story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $view_mode: View mode, e.g. 'full', 'teaser'...
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * Field variables: for each field instance attached to the node a corresponding
 * variable is defined, e.g. $node->body becomes $body. When needing to access
 * a field's raw values, developers/themers are strongly encouraged to use these
 * variables. Otherwise they will have to explicitly specify the desired field
 * language, e.g. $node->body['en'], thus overriding any language negotiation
 * rule that was previously applied.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 */

?>

<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <a name="<?php print "anchor-". $node->nid; ?>"></a>

	<?php print render($title_prefix); ?>
		<?php if (!$page): ?>
		  <?php (isset($node->field_parent_chapter['und'][0]['entity']->field_section_number['und'][0]['value']) ? $section = $node->field_parent_chapter['und'][0]['entity']->field_section_number['und'][0]['value'] : $section = ""); ?>
		  <?php (isset($node->field_policy_number['und'][0]['value']) ? $policy = $node->field_policy_number['und'][0]['value'] : $policy = ""); ?>
			<h2<?php print $title_attributes; ?>><?php print $section . '.' . $policy . ' ' . $title; ?></h2>
			<?php endif; ?>
	<?php print render($title_suffix); ?>
	
	<div class="content" <?php print $content_attributes; ?>>

	<?php print render($content['field_policy_current_version']); ?>

	<?php print render($content['body']); ?>
	
	<?php print render($content['field_auth_cont']); ?>
	
	<?php
		$block = module_invoke('dor_policies', 'block_view', 'policy_jumpto_block');
	  print render($block);

	?>

<?php


			$alphabet = range('a','z');

 			 if (isset($content['field_policy_subsection']['#items'])) {

 			 		 $subsection_i = 1;

           foreach ($content['field_policy_subsection']['#items'] as $k => $v) {                    

                 $item = $content['field_policy_subsection'][$k]['entity']['field_collection_item'][$v['item_id']];
                 
                 print "<a name=\"anchor-". $v['item_id']."\"></a>";

                 print "<div class=\"policy-subsection-container policy-subection-container-".$v['item_id']."\">";

		                 print '<h2 class="policy-subsection-title" id="'. (isset($item['field_policy_subsection_title']['#items'][0]['value']) ? dor_policies_html_id($item['field_policy_subsection_title']['#items'][0]['value']) : "") .'">';
		                 print "<span class=\"prefix-container\">";
		                 
		                 if(!$hide_formatting){
		                 	print $subsection_i.". ";
		                 }
		                 
		                 print "</span>". (isset($item['field_policy_subsection_title']['#items'][0]['value']) ? $item['field_policy_subsection_title']['#items'][0]['value'] : "");
		                 print "</h2>";

                    if (isset($item['field_policy_subsection_body'])) {
		                 print "<div class=\"policy-subsection-body\">";
		                 print $item['field_policy_subsection_body']['#items'][0]['value'];
		                 print "</div>";
		               
		                }

                 $subsection_child_i = 65;

                 foreach ($item['field_policy_subsection_child']['#items'] as $l => $w) {

                 		$child_item = $item['field_policy_subsection_child'][$l]['entity']['field_collection_item'][$w['item_id']];

                 		print "<a name=\"anchor-". $v['item_id']."\"></a>";

                 		print "<div class=\"policy-subsection-child-container policy-subection-child-container-".$w['item_id']."\">";

			                 print "<h3 class=\"policy-subsection-child-title\">";
			                 print "<span class=\"prefix-container\">";
			                 
			                 if(!$hide_formatting){
				                 print chr($subsection_child_i) .". ";
				                }
			                 
			                 print "</span> ". (isset($child_item['field_policy_child_subtitle']['#items'][0]['value']) ? $child_item['field_policy_child_subtitle']['#items'][0]['value'] : "");
			                 print "</h3>";

                      if (isset($child_item['field_policy_child_body'])) {
			                 print "<div class=\"policy-subsection-child-body\">";
			                 print $child_item['field_policy_child_body']['#items'][0]['value'];
			                 print "</div>";
                      }

			                  $grandchild_i = 1;

			                  foreach ($child_item['field_policy_grandchildren']['#items'] as $m => $x) {

			                 		$grandchild_item = $child_item['field_policy_grandchildren'][$m]['entity']['field_collection_item'][$x['item_id']];

			                 		print "<a name=\"anchor-". $v['item_id']."\"></a>";

			                 		print "<div class=\"policy-subsection-grandchild-container policy-subection-grandchild-container-". $x['item_id'] ."\">";

						                 print "<h4 class=\"policy-subsection-grandchild-title\">";
						                 print "<span class=\"prefix-container\">";
						                 
						                 if(!$hide_formatting){
							                 print $grandchild_i .". ";
						                 }
						                 
						                 print "</span>". $grandchild_item['field_granchild_title']['#items'][0]['value'];
						                 print "</h4>";

						                 print "<div class=\"policy-subsection-grandchild-body\">";
						                 print $grandchild_item['field_grandchild_body']['#items'][0]['value'];
						                 print "</div>";

				                  print "</div>";

				                 $grandchild_i++;
			                 }

			                 if ($subsection_child_i < 90) {
				                 $subsection_child_i++;
			                 }
			                 else{
				                 $subsection_child_i = 65;
			                 }

	                  print "</div>";
                 }

               
                if (isset($item['field_policy_subsection_body'])) {
                 print '<p class="back-to-top"><a href="#main-content">Back to top</a></p>';
                }
               
                print "</div>";

                 $subsection_i++;
            }
        }

        ?>

		<?php print render($content['links']); ?><?php print render($content['comments']); ?>

	</div>
</div>
