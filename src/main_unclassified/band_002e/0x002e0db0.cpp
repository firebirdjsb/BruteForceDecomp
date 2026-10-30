/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F4EE325003015224A36D269DD878C1563024E97C3262873D34F83A32DAB54C1E
 * Entry: 0x002e0db0, Ghidra index: 10362, label: FUN_002e0db0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_002e0db0(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  undefined4 *puVar4;
  int local_21c;
  char local_215;
  uint local_214;
  int local_210;
  undefined4 local_20c;
  undefined4 local_208 [65];
  undefined4 local_104 [65];
  
  local_214 = 0;
  if (*(int *)(param_1 + 0x38) == 2) {
    if (*(char *)(param_1 + 0x3d) == '\0') {
      local_208[0] = 0;
      local_104[0] = 0;
      FUN_002e3400(local_208);
      FUN_002e3400(local_104);
      local_20c = 0;
      local_210 = 0;
      iVar2 = FUN_003450e0(0,0,local_208,local_104,&local_210);
      if (iVar2 == -1) {
        iVar2 = XAPILIB__GetLastError();
        if (iVar2 < 1) {
          uVar3 = XAPILIB__GetLastError();
          return uVar3;
        }
        uVar3 = XAPILIB__GetLastError();
        return uVar3 & 0xffff | 0x80070000;
      }
      if (iVar2 != 0) {
        cVar1 = FUN_002e3440(local_208);
        if (cVar1 == '\0') {
          FUN_002e3360(2);
          FUN_002e2fd0();
          FUN_002e0b90(param_1,3);
        }
        else {
          *(undefined1 *)(param_1 + 0x3d) = 1;
        }
      }
      if (*(char *)(param_1 + 0x3d) == '\0') goto LAB_002e0ee1;
    }
    local_21c = 1;
    FUN_002e3180(&local_215,&local_21c);
    if (local_21c != 0) {
      *(undefined1 *)(param_1 + 0x3d) = 0;
      if (local_215 == '\0') {
        FUN_002e2fd0();
      }
      else {
        FUN_002e0b90(param_1,0);
      }
    }
  }
LAB_002e0ee1:
  if (*(int *)(param_1 + 0x38) == 0) {
    do {
      local_21c = *(int *)(in_ECX + 0xf0);
      local_214 = FUN_002e3180(*(undefined4 *)(in_ECX + 0xfc),&local_21c);
      if (local_214 != 0) {
        if ((int)local_214 < 0) goto LAB_002e1008;
        break;
      }
      if (local_21c < 1) break;
      uVar3 = 0;
      if (*(int *)(in_ECX + 0x68) != 0) {
        puVar4 = (undefined4 *)(in_ECX + 0x6c);
        do {
          (*(code *)**(undefined4 **)*puVar4)(param_1,*(undefined4 *)(in_ECX + 0xfc),local_21c);
          uVar3 = uVar3 + 1;
          puVar4 = puVar4 + 1;
        } while (uVar3 < *(uint *)(in_ECX + 0x68));
      }
    } while (0 < local_21c);
    iVar2 = *(int *)(param_1 + 0x40);
    while (iVar2 != 0) {
      local_210 = *(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x4c);
      local_214 = FUN_002e3260(*(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x4c),&local_210);
      if (((int)local_214 < 0) ||
         (uVar3 = *(int *)(param_1 + 0x4c) + local_210, *(uint *)(param_1 + 0x4c) = uVar3,
         uVar3 < *(uint *)(param_1 + 0x48))) break;
      uVar3 = 0;
      if (*(int *)(in_ECX + 0x68) != 0) {
        puVar4 = (undefined4 *)(in_ECX + 0x6c);
        do {
          (**(code **)(*(int *)*puVar4 + 8))(param_1,*(undefined4 *)(param_1 + 0x44));
          uVar3 = uVar3 + 1;
          puVar4 = puVar4 + 1;
        } while (uVar3 < *(uint *)(in_ECX + 0x68));
      }
      iVar2 = *(int *)(param_1 + 0x40) + -1;
      *(int *)(param_1 + 0x40) = iVar2;
      _memmove((void *)(param_1 + 0x44),(void *)(param_1 + 0x50),iVar2 * 0xc);
      iVar2 = *(int *)(param_1 + 0x40);
    }
LAB_002e1008:
    if (((*(char *)(param_1 + 0x3c) != '\0') && (*(int *)(param_1 + 0x40) == 0)) ||
       ((int)local_214 < 0)) {
      FUN_002e2fd0();
      FUN_002e0b90(param_1,1);
    }
  }
  return local_214;
}
