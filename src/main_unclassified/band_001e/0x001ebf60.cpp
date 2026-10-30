/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A9341A42D550604642EDE508D85273CAC215D9A3C2CFFEBE4043E4A6698B7A79
 * Entry: 0x001ebf60, Ghidra index: 6904, label: FUN_001ebf60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00396a5c;
void FUN_001ebf60(void)

{
  int iVar1;
  undefined4 *unaff_ESI;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  *unaff_ESI = DAT_00396a5c;
  unaff_ESI[1] = 0;
  unaff_ESI[0x15c4] = 0;
  unaff_ESI[0x15c5] = 0;
  unaff_ESI[0x15c6] = 0;
  unaff_ESI[0x15c7] = 0;
  unaff_ESI[0x15c8] = 0;
  unaff_ESI[0x15c9] = 0;
  XAPILIB__QueryPerformanceFrequency(unaff_ESI + 0x15ca);
  uVar3 = __alldiv(unaff_ESI[0x15ca],unaff_ESI[0x15cb],1000,0);
  *(undefined8 *)(unaff_ESI + 0x15cc) = uVar3;
  unaff_ESI[0x15d0] = 0;
  unaff_ESI[0x15d1] = 0;
  unaff_ESI[0x15d2] = 0;
  unaff_ESI[0x15d3] = 0;
  unaff_ESI[0x15d4] = 0;
  unaff_ESI[0x15d5] = 0;
  XAPILIB__QueryPerformanceFrequency(unaff_ESI + 0x15d6);
  uVar3 = __alldiv(unaff_ESI[0x15d6],unaff_ESI[0x15d7],1000,0);
  *(undefined8 *)(unaff_ESI + 0x15d8) = uVar3;
  unaff_ESI[0x15db] = 0;
  unaff_ESI[4] = 0;
  unaff_ESI[5] = 0;
  unaff_ESI[6] = 0;
  unaff_ESI[9] = 0;
  puVar2 = unaff_ESI + 10;
  for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  unaff_ESI[0x15ce] = 0xffffffff;
  unaff_ESI[0xb87] = 0xffffffff;
  unaff_ESI[7] = 0;
  *(undefined1 *)(unaff_ESI + 8) = 0;
  *(undefined1 *)(unaff_ESI + 0x28) = 0;
  unaff_ESI[0x2a] = 0;
  *(undefined1 *)((int)unaff_ESI + 0x2e27) = 0;
  unaff_ESI[0xb8a] = 0xffffffff;
  unaff_ESI[0x29] = 0x80000013;
  return;
}
