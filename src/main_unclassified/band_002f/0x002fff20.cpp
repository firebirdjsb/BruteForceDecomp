/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3E4BECEEF2FE612ED3678601CDFD1F4B9F6C2454493C78907F4AC18D6B2F1CD2
 * Entry: 0x002fff20, Ghidra index: 11073, label: FUN_002fff20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0038e3c8;
extern uint32_t PTR_FUN_0038e3e4;
void FUN_002fff20(void)

{
  undefined4 in_EAX;
  undefined4 *puVar1;
  undefined4 in_ECX;
  int iVar2;
  undefined4 in_EDX;
  undefined4 *unaff_ESI;
  
  unaff_ESI[4] = in_EAX;
  unaff_ESI[1] = in_ECX;
  unaff_ESI[2] = in_EDX;
  unaff_ESI[3] = 0;
  *unaff_ESI = PTR_FUN_0038e3e4;
  FUN_00302600(in_EAX,0x4b0);
  *unaff_ESI = &PTR_FUN_0038e3c8;
  puVar1 = unaff_ESI + 0x14;
  iVar2 = 2;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 0x10;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_002ffa10();
  return;
}
