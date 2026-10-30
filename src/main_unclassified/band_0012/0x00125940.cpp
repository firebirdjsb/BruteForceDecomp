/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 202DF5BCF50021DE4D78B29134DE1446D26433CE5ADCB4C4A5B841664A438FCC
 * Entry: 0x00125940, Ghidra index: 3698, label: FUN_00125940
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_00125940(void)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 **ppuVar3;
  undefined4 *puVar4;
  uint unaff_ESI;
  int unaff_EDI;
  float10 fVar5;
  undefined4 *local_8;
  undefined4 *local_4;
  
  fVar5 = (float10)*(float *)(*(int *)(unaff_EDI + 0xc) + 0x220);
  ppuVar3 = &local_8;
  if (unaff_ESI != 0xffffffff) {
    local_4 = *(undefined4 **)(unaff_EDI + 0x568);
    cVar1 = *(char *)((int)local_4[1] + 0x15);
    local_8 = local_4;
    puVar4 = (undefined4 *)local_4[1];
    while (cVar1 == '\0') {
      if ((uint)puVar4[3] < unaff_ESI) {
        puVar2 = (undefined4 *)puVar4[2];
        puVar4 = local_8;
      }
      else {
        puVar2 = (undefined4 *)*puVar4;
      }
      local_8 = puVar4;
      puVar4 = puVar2;
      cVar1 = *(char *)((int)puVar2 + 0x15);
    }
    if ((local_8 == local_4) || (unaff_ESI < (uint)local_8[3])) {
      ppuVar3 = &local_4;
    }
    if (*ppuVar3 != *(undefined4 **)(unaff_EDI + 0x568)) {
      fVar5 = fVar5 * (float10)(float)(*ppuVar3)[4];
    }
  }
  return fVar5;
}
