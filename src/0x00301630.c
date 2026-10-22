/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 415A8AED6AAB1D358E0243B3F1C83A131BBA4F1D506E1F874A217E10F2551234
 * Entry: 0x00301630, Ghidra index: 11077, label: FUN_00301630
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0038e3e4;
extern uint32_t PTR_FUN_0038e3fc;
void FUN_00301630(void)

{
  undefined4 in_EAX;
  undefined4 *puVar1;
  undefined4 in_ECX;
  int iVar2;
  undefined4 *unaff_ESI;
  undefined4 unaff_EDI;
  
  unaff_ESI[1] = in_EAX;
  unaff_ESI[2] = in_ECX;
  unaff_ESI[3] = 0;
  *unaff_ESI = &PTR_FUN_0038e3e4;
  unaff_ESI[4] = unaff_EDI;
  FUN_00302600(unaff_EDI,0x4e0);
  *unaff_ESI = &PTR_FUN_0038e3fc;
  puVar1 = unaff_ESI + 0x14;
  iVar2 = 2;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 0x10;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = unaff_ESI + 0x25;
  iVar2 = 3;
  do {
    *(undefined1 *)puVar1 = 0;
    *(undefined1 *)((int)puVar1 + 1) = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0x3f800000;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1 = puVar1 + 7;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_00300b60(unaff_ESI,unaff_EDI);
  return;
}
