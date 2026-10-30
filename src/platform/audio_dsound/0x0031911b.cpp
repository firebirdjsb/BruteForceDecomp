/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8492E03C1AE6DA0A82CF9976219F210B6074D2F5FAAFBB5648EC445BD9404C46
 * Entry: 0x0031911b, Ghidra index: 12215, label: CMcpxBuffer_Pause
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int DSOUND__CMcpxBuffer_Pause(int param_1)

{
  ushort uVar1;
  int in_ECX;
  
  FUN_003118f0();
  if ((*(byte *)(in_ECX + 0x12) & 3) == 3) {
    if (param_1 == 0) {
      uVar1 = *(ushort *)(in_ECX + 0x12) & 0xffbb;
    }
    else if (param_1 == 1) {
      uVar1 = *(ushort *)(in_ECX + 0x12) & 0xffbf | 4;
    }
    else {
      if (param_1 != 2) {
        param_1 = -0x7fffbffb;
        goto LAB_0031917f;
      }
      uVar1 = *(ushort *)(in_ECX + 0x12) & 0xfffb | 0x40;
    }
    param_1 = FUN_00317e87(uVar1);
  }
LAB_0031917f:
  FUN_00311923();
  return param_1;
}
