/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A7ADAFC737D298510EEE35F5525E476C477F7890FEEC04C7895CA7A3D85FED55
 * Entry: 0x002ebb1c, Ghidra index: 10638, label: _strtoxl
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b6c30;
extern uint32_t *PTR_DAT_003b6c3c;
extern uint32_t _DAT_0040f4d8;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _strtoxl
   
   Library: Visual Studio 2003 Release */

uint _strtoxl(byte *param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  uint local_8;
  
  local_8 = 0;
  bVar3 = *param_1;
  pbVar1 = param_1;
  while( true ) {
    pbVar6 = pbVar1 + 1;
    if (DAT_003b6c30 < 2) {
      uVar2 = (byte)PTR_DAT_003b6c3c[(uint)bVar3 * 2] & 8;
    }
    else {
      uVar2 = FUN_002eba73((uint)bVar3,8);
    }
    if (uVar2 == 0) break;
    bVar3 = *pbVar6;
    pbVar1 = pbVar6;
  }
  if (bVar3 == 0x2d) {
    param_4 = param_4 | 2;
LAB_002ebb6d:
    bVar3 = *pbVar6;
    pbVar6 = pbVar1 + 2;
  }
  else if (bVar3 == 0x2b) goto LAB_002ebb6d;
  if ((((int)param_3 < 0) || (param_3 == 1)) || (0x24 < (int)param_3)) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = param_1;
    }
    return 0;
  }
  if (param_3 == 0) {
    if (bVar3 != 0x30) {
      param_3 = 10;
      goto LAB_002ebbd0;
    }
    if ((*pbVar6 != 0x78) && (*pbVar6 != 0x58)) {
      param_3 = 8;
      goto LAB_002ebbd0;
    }
    param_3 = 0x10;
  }
  if (((param_3 == 0x10) && (bVar3 == 0x30)) && ((*pbVar6 == 0x78 || (*pbVar6 == 0x58)))) {
    bVar3 = pbVar6[1];
    pbVar6 = pbVar6 + 2;
  }
LAB_002ebbd0:
  uVar2 = (uint)(0xffffffff / (ulonglong)param_3);
  do {
    if ((*(ushort *)(PTR_DAT_003b6c3c + (uint)bVar3 * 2) & 4) == 0) {
      if ((*(ushort *)(PTR_DAT_003b6c3c + (uint)bVar3 * 2) & 0x103) == 0) {
LAB_002ebc3e:
        pbVar6 = pbVar6 + -1;
        if ((param_4 & 8) == 0) {
          if (param_2 != (undefined4 *)0x0) {
            pbVar6 = param_1;
          }
          local_8 = 0;
        }
        else if (((param_4 & 4) != 0) ||
                (((param_4 & 1) == 0 &&
                 ((((param_4 & 2) != 0 && (0x80000000 < local_8)) ||
                  (((param_4 & 2) == 0 && (0x7fffffff < local_8)))))))) {
          _DAT_0040f4d8 = 0x22;
          if ((param_4 & 1) == 0) {
            local_8 = ((param_4 & 2) != 0) + 0x7fffffff;
          }
          else {
            local_8 = 0xffffffff;
          }
        }
        if (param_2 != (undefined4 *)0x0) {
          *param_2 = pbVar6;
        }
        if ((param_4 & 2) == 0) {
          return local_8;
        }
        return -local_8;
      }
      if (((char)bVar3 < 'a') || ('z' < (char)bVar3)) {
        iVar5 = (int)(char)bVar3;
      }
      else {
        iVar5 = (char)bVar3 + -0x20;
      }
      uVar4 = iVar5 - 0x37;
    }
    else {
      uVar4 = (int)(char)bVar3 - 0x30;
    }
    if (param_3 <= uVar4) goto LAB_002ebc3e;
    if ((local_8 < uVar2) ||
       ((local_8 == uVar2 && (uVar4 <= (uint)(0xffffffff % (ulonglong)param_3))))) {
      local_8 = local_8 * param_3 + uVar4;
      param_4 = param_4 | 8;
    }
    else {
      param_4 = param_4 | 0xc;
    }
    bVar3 = *pbVar6;
    pbVar6 = pbVar6 + 1;
  } while( true );
}
