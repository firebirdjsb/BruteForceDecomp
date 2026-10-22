/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C671733E40ED4B1DA2B5FCC340D600BBB396CBE537AE6887701DC3EB706EB1CF
 * Entry: 0x0033eef3, Ghidra index: 12633, label: FUN_0033eef3
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0033eef3(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 local_214;
  undefined4 local_210;
  int local_110;
  undefined4 local_10c;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0;
  local_8 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    XAPILIB__SetEvent(*(int *)(param_1 + 8));
  }
  local_210 = *(undefined4 *)(param_1 + 0x10);
  local_214 = 1;
  local_110 = 1;
  *(undefined4 *)(param_1 + 0xc) = 0;
  local_10c = local_210;
  iVar1 = FUN_003450e0(1,0,&local_214,&local_110,&local_c);
  if (iVar1 == -1) {
    iVar1 = XAPILIB__GetLastError();
    if (iVar1 < 1) {
      uVar2 = XAPILIB__GetLastError();
    }
    else {
      uVar2 = XAPILIB__GetLastError();
      uVar2 = uVar2 & 0xffff | 0x80070000;
    }
    *(uint *)(param_1 + 0xc) = uVar2;
  }
  else if ((iVar1 != 0) && (*(undefined4 *)(param_1 + 0xc) = 0x1500f0, local_110 != 0)) {
    *(undefined4 *)(param_1 + 0xc) = 0x80072741;
  }
  return *(undefined4 *)(param_1 + 0xc);
}
