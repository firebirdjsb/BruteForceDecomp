/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2F2236456E90504C7074C822D262400A1A45687DC71070E90508BFEE3D78CE6F
 * Entry: 0x000e0590, Ghidra index: 2746, label: FUN_000e0590
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint FUN_000e0b20(uint param_1,byte *param_2,uint param_3);
extern void FUN_0001f4f0(int param_1,uint param_2,uint param_3);
extern void FUN_001e8830(int param_1);
extern uint32_t FUN_002ea01d(uint32_t guest_size);
extern undefined4 FUN_000e2750(undefined4 param_1);
extern undefined4 FUN_000ff730(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4);
extern void FUN_000b2a50(void);

extern uint32_t DAT_00400534;
int FUN_000e0590(int param_1)

{
  int iVar1;
  char cVar2;
  int in_EAX;
  int *piVar3;
  int iVar4;
  int iVar5;
  int local_144;
  int local_140;
  undefined1 local_13c [4];
  uint local_138;
  undefined4 local_128;
  uint local_124;
  uint local_11c;
  undefined4 local_10c;
  uint local_108;
  
  local_144 = 0;
  piVar3 = (int *)0x0;
  if (*(undefined4 **)(param_1 + 0xc7c) != (undefined4 *)0x0) {
    piVar3 = (int *)**(undefined4 **)(param_1 + 0xc7c);
  }
  if (piVar3 != *(int **)(param_1 + 0xc7c)) {
    do {
      iVar1 = piVar3[2];
      if (*(uint *)(in_EAX + 0x18) < 0x10) {
        iVar4 = in_EAX + 4;
      }
      else {
        iVar4 = *(int *)(in_EAX + 4);
      }
      iVar4 = FUN_000e0b20(0,iVar4,*(undefined4 *)(in_EAX + 0x14));
      if (iVar4 == 0) {
        local_144 = iVar1 + 0x1c;
        if (local_144 != 0) {
          return local_144;
        }
        break;
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)(param_1 + 0xc7c));
  }
  local_124 = 0xf;
  local_128 = 0;
  local_138 = local_138 & 0xffffff00;
  FUN_0001f4f0(in_EAX,0,0xffffffff);
  local_108 = 0xf;
  local_10c = 0;
  local_11c = local_11c & 0xffffff00;
  FUN_0001f4f0(local_13c,0,0xffffffff);
  FUN_001e8830(&DAT_00400534);
  if (0xf < local_108) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(local_11c);
  }
  local_140 = FUN_002ea01d(0xa0);
  if (local_140 == 0) {
    local_140 = 0;
  }
  else {
    *(undefined4 *)(local_140 + 0x18) = 0xf;
    *(undefined4 *)(local_140 + 0x14) = 0;
    *(undefined1 *)(local_140 + 4) = 0;
    *(undefined4 *)(local_140 + 0x1c) = 0;
    *(undefined4 *)(local_140 + 0x20) = 0;
    *(undefined4 *)(local_140 + 0x34) = 0;
    *(undefined4 *)(local_140 + 0x38) = 0;
    *(undefined4 *)(local_140 + 0x40) = 0;
    *(undefined4 *)(local_140 + 0x44) = 0;
    *(undefined4 *)(local_140 + 0x48) = 0;
    *(undefined4 *)(local_140 + 0x50) = 0;
    *(undefined4 *)(local_140 + 0x54) = 0;
    *(undefined4 *)(local_140 + 0x58) = 0;
    *(undefined4 *)(local_140 + 0x60) = 0;
    *(undefined4 *)(local_140 + 100) = 0;
    *(undefined4 *)(local_140 + 0x68) = 0;
    *(undefined4 *)(local_140 + 0x6c) = 0;
    *(undefined4 *)(local_140 + 0x70) = 0;
    *(undefined4 *)(local_140 + 0x74) = 0;
    *(undefined4 *)(local_140 + 0x78) = 0;
    *(undefined4 *)(local_140 + 0x7c) = 0;
    *(undefined4 *)(local_140 + 0x84) = 0;
    *(undefined4 *)(local_140 + 0x88) = 0;
    *(undefined4 *)(local_140 + 0x8c) = 0;
    *(undefined4 *)(local_140 + 0x94) = 0;
    *(undefined4 *)(local_140 + 0x98) = 0;
    *(undefined4 *)(local_140 + 0x9c) = 0;
  }
  iVar1 = local_140 + 0x1c;
  cVar2 = FUN_000e2750(iVar1);
  if (cVar2 == '\x01') {
    FUN_0001f4f0(local_13c,0,0xffffffff);
    iVar4 = *(int *)(param_1 + 0xc7c);
    iVar5 = FUN_000ff730(param_1 + 0xc78,iVar4,*(undefined4 *)(iVar4 + 4),&local_140);
    FUN_000b2a50();
    *(int *)(iVar4 + 4) = iVar5;
    **(int **)(iVar5 + 4) = iVar5;
    local_144 = iVar1;
  }
  if (local_124 < 0x10) {
    return local_144;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(local_138);
}
