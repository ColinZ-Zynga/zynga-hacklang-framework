<?hh // strict

namespace Zynga\Framework\IO\Disk\V1\Exception;

use Zynga\Framework\IO\Disk\V1\Exception\FilePermissionsException;

/**
 * Represents that an invalid file name was attempted to be used
 */
class InvalidFileNameException extends FilePermissionsException {}
