/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7D8260287402EE83CAB3C0F4A9EDF505409DBDC10F23F279BD67AACE6824BF63
 * Entry: 0x0033e8c3, Ghidra index: 12613, label: FUN_0033e8c3
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0033e8c3(int param_1)

{
  int iVar1;
  code *pcVar2;
  
  FUN_003476db(param_1 + 0x110,0,0xffffffff);
  iVar1 = *(int *)(param_1 + 0x74);
  if ((iVar1 != -1) && (iVar1 != 0)) {
    FUN_00345084(iVar1);
    *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  }
  iVar1 = *(int *)(param_1 + 0x4c);
  if (((iVar1 != -1) && (iVar1 != 0)) && ((*(byte *)(param_1 + 0x18) & 4) == 0)) {
    XAPILIB__CloseHandle(iVar1);
    *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  }
  if ((*(byte *)(param_1 + 0x1b) & 0x80) == 0) {
    pcVar2 = *(code **)(param_1 + 0xf4);
  }
  else {
    pcVar2 = *(code **)(param_1 + 0xfc);
  }
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(param_1);
  }
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
    XAPILIB__CloseHandle(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffffffe;
  }
  return;
}
