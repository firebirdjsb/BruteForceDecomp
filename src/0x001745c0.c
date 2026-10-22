/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3E53773EB6965D6FC08EFA8A4AD0CB356EAD85582F16FFA822E4E0CCD742EC97
 * Entry: 0x001745c0, Ghidra index: 4912, label: FUN_001745c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s_23_23_IScriptEngine_004064a8[];
void FUN_001745c0(void)

{
  int *piVar1;
  int iVar2;
  int unaff_ESI;
  
  FUN_00238080(s_23_23_IScriptEngine_004064a8,(undefined4 *)(unaff_ESI + 0x74));
  if (unaff_ESI == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = unaff_ESI + 0x5c;
  }
  piVar1 = *(int **)(unaff_ESI + 0x74);
  (**(code **)(*piVar1 + 0xa0))(piVar1,iVar2);
  *(undefined1 *)(unaff_ESI + 0xa4) = 0;
  return;
}
