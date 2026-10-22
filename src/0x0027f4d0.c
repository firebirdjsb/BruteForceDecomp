/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C73F03AD88E5C9C662F0CD9B5DDF2E37FC9743D17AAB34D34DF4AE883772B853
 * Entry: 0x0027f4d0, Ghidra index: 9018, label: FUN_0027f4d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s_channel__name_____08X___ref____d_00404e88[];
extern char s_someone_is_using_get_string_0040dbb4[];
void FUN_0027f4d0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x14);
  iVar2 = *(int *)(**(int **)(param_1 + 0x10) + 0x1c);
  XAPILIB__OutputDebugStringA(s_someone_is_using_get_string_0040dbb4);
  FUN_002eaa86(param_1,s_channel__name_____08X___ref____d_00404e88,
               *(undefined4 *)(iVar1 * 0x10 + iVar2),*(undefined4 *)(param_1 + 0xc));
  return;
}
