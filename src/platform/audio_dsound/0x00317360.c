/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 26F653EE2DE58880C6BC3AE4F8DDC58713E695F98E9863C9F082B5687D4D9F5D
 * Entry: 0x00317360, Ghidra index: 12173, label: CMcpxStream_Pause
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 DSOUND__CMcpxStream_Pause(int param_1)

{
  ushort *puVar1;
  ushort uVar2;
  undefined4 uVar3;
  int in_ECX;
  
  if (param_1 == 0) {
    puVar1 = (ushort *)(in_ECX + 0x12);
    if ((*(byte *)puVar1 & 0x20) != 0) {
      *puVar1 = *puVar1 & 0xffdf;
      FUN_00316fda();
    }
    uVar3 = FUN_00317e87(*puVar1 & 0xffbb);
    return uVar3;
  }
  if (param_1 == 1) {
    uVar2 = *(ushort *)(in_ECX + 0x12) & 0xffbf | 4;
  }
  else if (param_1 == 2) {
    uVar2 = *(ushort *)(in_ECX + 0x12) & 0xfffb | 0x40;
  }
  else {
    if (param_1 != 3) {
      return 0x80004005;
    }
    if ((*(byte *)(in_ECX + 0x12) & 3) != 3) {
      *(ushort *)(in_ECX + 0x12) = *(ushort *)(in_ECX + 0x12) | 0x20;
      return 0;
    }
    uVar2 = *(ushort *)(in_ECX + 0x12) & 0xffbb;
  }
  uVar3 = FUN_00317e87(uVar2);
  return uVar3;
}
