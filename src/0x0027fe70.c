/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9CB510A476FA72B5B10FBAA0DBC7D590F3EAC692A02161EF48EB1A2E1DCE38EA
 * Entry: 0x0027fe70, Ghidra index: 9023, label: FUN_0027fe70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s_someone_is_using_get_string_0040dbb4[];
extern char s_transformed_channel__name_____08_00404e58[];
void FUN_0027fe70(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x18);
  iVar2 = *(int *)(**(int **)(param_1 + 0x14) + 0x1c);
  XAPILIB__OutputDebugStringA(s_someone_is_using_get_string_0040dbb4);
  FUN_002eaa86(param_1,s_transformed_channel__name_____08_00404e58,
               *(undefined4 *)(iVar1 * 0x10 + iVar2),*(undefined4 *)(param_1 + 0xc));
  return;
}
