/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E66C97338A871E199599388C0553F83A07410330833CEE0153E39D23C6AE68D5
 * Entry: 0x00319896, Ghidra index: 12233, label: FUN_00319896
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00319896(void)

{
  int *in_ECX;
  uint uVar1;
  byte *pbVar2;
  
  uVar1 = 0;
  DSOUND__CMcpxBuffer_Stop(0);
  FUN_00318786();
  pbVar2 = (byte *)(in_ECX + 0x26);
  do {
    if ((*pbVar2 & 1) != 0) {
      (**(code **)(*in_ECX + 0x1c))(uVar1);
    }
    uVar1 = uVar1 + 1;
    pbVar2 = pbVar2 + 0x20;
  } while (uVar1 < 6);
  FUN_00318e15();
  FUN_003174e3();
  FUN_00317710();
  return;
}
