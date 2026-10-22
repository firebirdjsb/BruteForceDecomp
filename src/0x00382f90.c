/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4620210A399353A5F8D5C0442B17C17D7FC4042EA9BC5B3E77336CD1BB5ECA52
 * Entry: 0x00382f90, Ghidra index: 13610, label: FUN_00382f90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00382f90(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((*(byte *)(param_2 + 0xd) & 1) != 0) {
    KeCancelTimer(param_2 + 0x70);
    *(byte *)(param_2 + 0xd) = *(byte *)(param_2 + 0xd) & 0xfe;
  }
  *(byte *)(param_2 + 0xd) = *(byte *)(param_2 + 0xd) & 0xfd;
  if (*(int *)(param_1 + 4) < 0) {
    uVar1 = FUN_00381051(*(int *)(param_1 + 4));
  }
  if (*(int *)(param_2 + 0x5f) != 0x53425355) {
    uVar1 = 0xc0000001;
  }
  if (*(int *)(param_2 + 99) != *(int *)(param_2 + 0x44)) {
    uVar1 = 0xc0000001;
  }
  if (*(char *)(param_2 + 0x6b) == '\x02') {
    uVar1 = 0xc0000001;
  }
  if (*(char *)(param_2 + 0x6b) == '\x01') {
    uVar1 = 0xc000003e;
  }
  if ((uVar1 & 0xc0000000) == 0xc0000000) {
    FUN_00382e8a();
  }
  else {
    (**(code **)(param_2 + 0x30))(param_2,0);
  }
  return;
}
