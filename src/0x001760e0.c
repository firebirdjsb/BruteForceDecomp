/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 269B6425114CACEF7F881D137AC6DFFE4A26822D8E72E592F5C36F765E487EB4
 * Entry: 0x001760e0, Ghidra index: 4934, label: FUN_001760e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s_script_0040c7b0[];
extern char s_someone_is_using_get_string_0040dbb4[];
undefined4 FUN_001760e0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x4c) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(in_ECX + 0x4c));
  }
  *(undefined4 *)(in_ECX + 0x4c) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 7;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  XAPILIB__OutputDebugStringA(s_someone_is_using_get_string_0040dbb4);
  *(undefined4 *)(in_ECX + 0x4c) = 0;
  *(undefined4 *)(in_ECX + 0x54) = 0;
  *(char **)(in_ECX + 0x50) = s_script_0040c7b0;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  *(undefined4 *)(in_ECX + 0x44) = 0;
  *(undefined4 *)(in_ECX + 0x40) = 0;
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  *(undefined4 *)(in_ECX + 0x34) = 0;
  *(undefined4 *)(in_ECX + 0x30) = 0;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  *(undefined4 *)(in_ECX + 0x48) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x38) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x28) = 0x3f800000;
  return 0x3f800001;
}
