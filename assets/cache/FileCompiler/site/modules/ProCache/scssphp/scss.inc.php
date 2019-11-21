<?php
if (version_compare(PHP_VERSION, '5.4') < 0) {
    throw new \Exception('scssphp requires PHP 5.4 or above');
}

if (! class_exists('Leafo\ScssPhp\Version', false)) {
 include_once(\ProcessWire\wire('files')->compile(\ProcessWire\wire("config")->paths->root . 'site/modules/ProCache/scssphp' . '/src/Base/Range.php',array('includes'=>true,'namespace'=>true,'modules'=>false,'skipIfNamespace'=>false)));
 include_once(\ProcessWire\wire('files')->compile(\ProcessWire\wire("config")->paths->root . 'site/modules/ProCache/scssphp' . '/src/Block.php',array('includes'=>true,'namespace'=>true,'modules'=>false,'skipIfNamespace'=>false)));
 include_once(\ProcessWire\wire('files')->compile(\ProcessWire\wire("config")->paths->root . 'site/modules/ProCache/scssphp' . '/src/Colors.php',array('includes'=>true,'namespace'=>true,'modules'=>false,'skipIfNamespace'=>false)));
 include_once(\ProcessWire\wire('files')->compile(\ProcessWire\wire("config")->paths->root . 'site/modules/ProCache/scssphp' . '/src/Compiler.php',array('includes'=>true,'namespace'=>true,'modules'=>false,'skipIfNamespace'=>false)));
 include_once(\ProcessWire\wire('files')->compile(\ProcessWire\wire("config")->paths->root . 'site/modules/ProCache/scssphp' . '/src/Compiler/Environment.php',array('includes'=>true,'namespace'=>true,'modules'=>false,'skipIfNamespace'=>false)));
 include_once(\ProcessWire\wire('files')->compile(\ProcessWire\wire("config")->paths->root . 'site/modules/ProCache/scssphp' . '/src/Exception/CompilerException.php',array('includes'=>true,'namespace'=>true,'modules'=>false,'skipIfNamespace'=>false)));
 include_once(\ProcessWire\wire('files')->compile(\ProcessWire\wire("config")->paths->root . 'site/modules/ProCache/scssphp' . '/src/Exception/ParserException.php',array('includes'=>true,'namespace'=>true,'modules'=>false,'skipIfNamespace'=>false)));
 include_once(\ProcessWire\wire('files')->compile(\ProcessWire\wire("config")->paths->root . 'site/modules/ProCache/scssphp' . '/src/Exception/ServerException.php',array('includes'=>true,'namespace'=>true,'modules'=>false,'skipIfNamespace'=>false)));
 include_once(\ProcessWire\wire('files')->compile(\ProcessWire\wire("config")->paths->root . 'site/modules/ProCache/scssphp' . '/src/Formatter.php',array('includes'=>true,'namespace'=>true,'modules'=>false,'skipIfNamespace'=>false)));
 include_once(\ProcessWire\wire('files')->compile(\ProcessWire\wire("config")->paths->root . 'site/modules/ProCache/scssphp' . '/src/Formatter/Compact.php',array('includes'=>true,'namespace'=>true,'modules'=>false,'skipIfNamespace'=>false)));
 include_once(\ProcessWire\wire('files')->compile(\ProcessWire\wire("config")->paths->root . 'site/modules/ProCache/scssphp' . '/src/Formatter/Compressed.php',array('includes'=>true,'namespace'=>true,'modules'=>false,'skipIfNamespace'=>false)));
 include_once(\ProcessWire\wire('files')->compile(\ProcessWire\wire("config")->paths->root . 'site/modules/ProCache/scssphp' . '/src/Formatter/Crunched.php',array('includes'=>true,'namespace'=>true,'modules'=>false,'skipIfNamespace'=>false)));
 include_once(\ProcessWire\wire('files')->compile(\ProcessWire\wire("config")->paths->root . 'site/modules/ProCache/scssphp' . '/src/Formatter/Debug.php',array('includes'=>true,'namespace'=>true,'modules'=>false,'skipIfNamespace'=>false)));
 include_once(\ProcessWire\wire('files')->compile(\ProcessWire\wire("config")->paths->root . 'site/modules/ProCache/scssphp' . '/src/Formatter/Expanded.php',array('includes'=>true,'namespace'=>true,'modules'=>false,'skipIfNamespace'=>false)));
 include_once(\ProcessWire\wire('files')->compile(\ProcessWire\wire("config")->paths->root . 'site/modules/ProCache/scssphp' . '/src/Formatter/Nested.php',array('includes'=>true,'namespace'=>true,'modules'=>false,'skipIfNamespace'=>false)));
 include_once(\ProcessWire\wire('files')->compile(\ProcessWire\wire("config")->paths->root . 'site/modules/ProCache/scssphp' . '/src/Formatter/OutputBlock.php',array('includes'=>true,'namespace'=>true,'modules'=>false,'skipIfNamespace'=>false)));
 include_once(\ProcessWire\wire('files')->compile(\ProcessWire\wire("config")->paths->root . 'site/modules/ProCache/scssphp' . '/src/Node.php',array('includes'=>true,'namespace'=>true,'modules'=>false,'skipIfNamespace'=>false)));
 include_once(\ProcessWire\wire('files')->compile(\ProcessWire\wire("config")->paths->root . 'site/modules/ProCache/scssphp' . '/src/Node/Number.php',array('includes'=>true,'namespace'=>true,'modules'=>false,'skipIfNamespace'=>false)));
 include_once(\ProcessWire\wire('files')->compile(\ProcessWire\wire("config")->paths->root . 'site/modules/ProCache/scssphp' . '/src/Parser.php',array('includes'=>true,'namespace'=>true,'modules'=>false,'skipIfNamespace'=>false)));
 include_once(\ProcessWire\wire('files')->compile(\ProcessWire\wire("config")->paths->root . 'site/modules/ProCache/scssphp' . '/src/Type.php',array('includes'=>true,'namespace'=>true,'modules'=>false,'skipIfNamespace'=>false)));
 include_once(\ProcessWire\wire('files')->compile(\ProcessWire\wire("config")->paths->root . 'site/modules/ProCache/scssphp' . '/src/Util.php',array('includes'=>true,'namespace'=>true,'modules'=>false,'skipIfNamespace'=>false)));
 include_once(\ProcessWire\wire('files')->compile(\ProcessWire\wire("config")->paths->root . 'site/modules/ProCache/scssphp' . '/src/Version.php',array('includes'=>true,'namespace'=>true,'modules'=>false,'skipIfNamespace'=>false)));
}
