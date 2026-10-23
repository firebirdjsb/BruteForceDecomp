/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B0E262C455C84BF41C8BF767CA7000B39B44BED0AD961450EE08DD74CACFC2D3
 * Entry: 0x0007c500, Ghidra index: 1477, label: FUN_0007c500
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
extern char s_someone_is_using_get_string_0040dbb4[];
undefined4 FUN_0007c500(void)

{
  int *piVar1;
  int *in_ECX;
  
  piVar1 = (int *)(**(code **)(*in_ECX + 200))();
  if (*piVar1 != DAT_0046d064) {
    (**(code **)(*in_ECX + 200))();
    XAPILIB__OutputDebugStringA(s_someone_is_using_get_string_0040dbb4);
  }
  return 0;
}
