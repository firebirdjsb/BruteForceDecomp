/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3CCBE37BAF2033F2946B988A8C8A54424883A33E97D7C5487F081B8CF5B3B46A
 * Entry: 0x0004d490, Ghidra index: 648, label: FUN_0004d490
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_0005df00(undefined4 param_1,undefined4 param_2);
extern void FUN_0004d520(int *param_1);
extern void FUN_0008f6e0(std::uint32_t guest_edx);

extern uint32_t PTR_FUN_003a4f64;
extern uint32_t PTR_LAB_0039cc18;
void FUN_0004d490(undefined4 param_1,undefined4 param_2)

{
  int *unaff_ESI;
  undefined1 local_16c [4];
  undefined **ppuStack_168;
  int iStack_15c;
  int iStack_148;
  undefined **appuStack_12c [75];
  
  FUN_00012320(9);
  (**(code **)(*unaff_ESI + 0x40))();
  FUN_0005df00(param_1,param_2);
  FUN_0004d520(appuStack_12c,local_16c);
  appuStack_12c[0] = &PTR_LAB_0039cc18;
  ppuStack_168 = &PTR_FUN_003a4f64;
  if (iStack_148 != 0) {
    FUN_0008f6e0();
  }
  if (iStack_15c != 0) {
    FUN_0008f6e0();
  }
  return;
}
