<?php
/**
 * @file
 * karus_infocenter.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function karus_infocenter_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-blogpost-body'.
  $field_instances['node-blogpost-body'] = array(
    'bundle' => 'blogpost',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'print' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 2,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Inhalt',
    'required' => 0,
    'settings' => array(
      'display_summary' => 1,
      'linkit' => array(
        'button_text' => 'Suche',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-blogpost-field_image'.
  $field_instances['node-blogpost-field_image'] = array(
    'bundle' => 'blogpost',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'print' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'content',
          'image_style' => 'thumbnail',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'filefield_paths' => array(
        'active_updating' => 0,
        'file_name' => array(
          'options' => array(
            'pathauto' => 1,
            'transliterate' => 1,
          ),
          'value' => '[file:ffp-name-only-original].[file:ffp-extension-original]',
        ),
        'file_path' => array(
          'options' => array(
            'pathauto' => 1,
            'transliterate' => 1,
          ),
          'value' => 'insonews/images',
        ),
        'retroactive_update' => 0,
      ),
      'filefield_paths_enabled' => 1,
      'image_field_caption' => array(
        'enabled' => 1,
        'image_field_caption_wrapper' => array(
          'image_field_caption_default' => array(
            'format' => 'plain_text',
            'value' => '',
          ),
        ),
      ),
      'image_field_caption_wrapper' => array(
        'image_field_caption_default' => array(
          'format' => 'plain_text',
          'value' => '',
        ),
      ),
      'max_filesize' => '2 MB',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-blogpost-field_tags'.
  $field_instances['node-blogpost-field_tags'] = array(
    'bundle' => 'blogpost',
    'default_value' => array(),
    'deleted' => 0,
    'description' => 'Tags sind Stichworte, die frei zum Thema des Blogposts gewählt werden können. Neue Begriffe werden den Tags hinzugefügt. Mehrere Begriffe können durch Komme getrennt eingeben werden.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 3,
      ),
      'print' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tags',
    'label' => 'Tags',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'autocomplete_deluxe',
      'settings' => array(
        'autocomplete_deluxe_path' => 'autocomplete_deluxe/taxonomy',
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'autocomplete_deluxe_taxonomy',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-download-body'.
  $field_instances['node-download-body'] = array(
    'bundle' => 'download',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Hier lässt sich eine Beschreibung zur Datei eingeben.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Beschreibung',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'linkit' => array(
        'button_text' => 'Suche',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-download-field_datei'.
  $field_instances['node-download-field_datei'] = array(
    'bundle' => 'download',
    'deleted' => 0,
    'description' => 'Eine Datei lässt sich entweder vom eigenen Rechner hochladen oder in der Medienbibliothek suchen und verknüpfen.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'file_entity',
        'settings' => array(
          'text' => 'Download [file:name]',
        ),
        'type' => 'file_download_link',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_datei',
    'label' => 'Datei',
    'required' => 1,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'txt pdf doc docx odt rtf',
      'filefield_paths' => array(
        'active_updating' => 0,
        'file_name' => array(
          'options' => array(
            'pathauto' => 1,
            'transliterate' => 1,
          ),
          'value' => '[file:ffp-name-only-original].[file:ffp-extension-original]',
        ),
        'file_path' => array(
          'options' => array(
            'pathauto' => 1,
            'transliterate' => 1,
          ),
          'value' => 'downloads',
        ),
        'retroactive_update' => 0,
      ),
      'filefield_paths_enabled' => 1,
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'private' => 0,
          'public' => 'public',
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 'document',
          'image' => 0,
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 'media_default--media_browser_1',
          'media_default--media_browser_my_files' => 0,
          'upload' => 'upload',
        ),
      ),
      'type' => 'media_generic',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-download-field_dateityp'.
  $field_instances['node-download-field_dateityp'] = array(
    'bundle' => 'download',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_dateityp',
    'label' => 'Dateityp',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-download-field_download_stand'.
  $field_instances['node-download-field_download_stand'] = array(
    'bundle' => 'download',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'short',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_download_stand',
    'label' => 'Stand',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd.m.Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-link-field_link'.
  $field_instances['node-link-field_link'] = array(
    'bundle' => 'link',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Hier die Adresse (URL) des Links eingeben (z.B. http://justiz.hamburg.de)',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_separate',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_link',
    'label' => 'Link',
    'required' => 1,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => '_blank',
        'title' => 'Link in neuem Tab öffnen',
      ),
      'display' => array(
        'url_cutoff' => '',
      ),
      'enable_tokens' => 0,
      'linkit' => array(
        'button_text' => 'Suche',
        'enable' => 1,
        'profile' => 'field',
      ),
      'rel_remove' => 'default',
      'title' => 'none',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 255,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-link-field_tags'.
  $field_instances['node-link-field_tags'] = array(
    'bundle' => 'link',
    'default_value' => array(),
    'deleted' => 0,
    'description' => 'Die Links werden nach Tags gruppiert und angeordnet, hier also bitte die gewünschte Link-Gruppe angeben (z.B. Rechtsprechung, Tools).',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_tags',
    'label' => 'Tags',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'autocomplete_deluxe',
      'settings' => array(
        'autocomplete_deluxe_path' => 'autocomplete_deluxe/taxonomy',
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'autocomplete_deluxe_taxonomy',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Beschreibung');
  t('Datei');
  t('Dateityp');
  t('Die Links werden nach Tags gruppiert und angeordnet, hier also bitte die gewünschte Link-Gruppe angeben (z.B. Rechtsprechung, Tools).');
  t('Eine Datei lässt sich entweder vom eigenen Rechner hochladen oder in der Medienbibliothek suchen und verknüpfen.');
  t('Hier die Adresse (URL) des Links eingeben (z.B. http://justiz.hamburg.de)');
  t('Hier lässt sich eine Beschreibung zur Datei eingeben.');
  t('Image');
  t('Inhalt');
  t('Link');
  t('Stand');
  t('Tags');
  t('Tags sind Stichworte, die frei zum Thema des Blogposts gewählt werden können. Neue Begriffe werden den Tags hinzugefügt. Mehrere Begriffe können durch Komme getrennt eingeben werden.');

  return $field_instances;
}
