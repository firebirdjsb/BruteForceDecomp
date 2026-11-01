/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A6DBC87CEC840612421BBFA57813EC0884D72A91EAFED30DF852547B9DE4D678
 * Entry: 0x000e45f0, Ghidra index: 2847, label: FUN_000e45f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched C++ draft signature; original E8 CALL 0x000E45FE and
 * EAX return verified against the pinned retail XBE. Incoming ECX and
 * cross-function linkage remain ABI_UNVERIFIED. */
extern uint FUN_000e6cc0(void);
void FUN_000e45f0(int param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *unaff_ESI;
  uint *unaff_EDI;
  
  iVar2 = FUN_000e6cc0();
  *unaff_ESI = *unaff_EDI;
  uVar4 = unaff_EDI[3];
  unaff_ESI[2] = 0;
  unaff_ESI[1] = 0;
  unaff_ESI[3] = uVar4;
  bVar1 = *(byte *)((byte *)unaff_EDI + 0x13);
  unaff_ESI[4] = (unaff_EDI[4] & 0xfffff000 | param_1 - 1U) & 0xff000fff | (param_2 + -1) * 0x1000;
  uVar3 = iVar2 * param_3 + (bVar1 + 1) * 0x40 * param_4 + unaff_EDI[1];
  uVar4 = uVar3 | 0x80000000;
  if ((*unaff_ESI & 0x70000) != 0x20000) {
    uVar4 = uVar3 & 0xfffffff;
  }
  unaff_ESI[1] = uVar4;
  return;
}
