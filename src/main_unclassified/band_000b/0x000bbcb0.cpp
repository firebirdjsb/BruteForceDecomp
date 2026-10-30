/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1A3300F9FB31DE9B1651E3C64B8456B71E6CF59D2447E0A956EDEF503DFE5857
 * Entry: 0x000bbcb0, Ghidra index: 2280, label: FUN_000bbcb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* C++ declaration matches one guest DWORD-pointer argument in the
 * 0x000BA5B0 Ghidra draft; original guest ABI remains UNVERIFIED. */
extern undefined4 * FUN_000ba5b0(undefined4 *guest_object);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern int FUN_000a7770(uint *param_1);

extern uint32_t PTR_FUN_003a0098;
void FUN_000bbcb0(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 *unaff_ESI;
  undefined4 local_4;
  
  FUN_000ba5b0(unaff_ESI);
  *(undefined1 *)(unaff_ESI + 0xb) = 0xff;
  *(undefined1 *)((int)unaff_ESI + 0x2d) = 0xff;
  *(undefined1 *)((int)unaff_ESI + 0x2e) = 0xff;
  *unaff_ESI = &PTR_FUN_003a0098;
  unaff_ESI[0xd] = 0;
  unaff_ESI[0xc] = 0;
  local_4 = 0xef08fe11;
  piVar2 = (int *)FUN_000a7770(&local_4);
  piVar1 = (int *)unaff_ESI[0xd];
  if (piVar1 != piVar2) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      unaff_ESI[0xd] = 0;
    }
    unaff_ESI[0xd] = piVar2;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(piVar2);
    }
  }
  return;
}
