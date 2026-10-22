/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 11A8B18492626DCF560D694A8582B1513397BCFDC3EAB3E6250C2832D59A12CB
 * Entry: 0x00341c77, Ghidra index: 12681, label: FUN_00341c77
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00341c77(int param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  undefined4 *puVar4;
  int local_10;
  char *local_c;
  int local_8;
  
  iVar1 = param_1;
  uVar3 = 0;
  local_8 = 0;
  local_10 = 0;
  local_c = (char *)0x0;
  if (*(int *)(param_1 + 0x10) != 0) {
    param_1 = 0;
    do {
      puVar4 = (undefined4 *)(*(int *)(iVar1 + 8) + param_1);
      iVar2 = __stricmp(*puVar4,"serviceType");
      if (iVar2 == 0) {
        if (local_8 == 0) {
          local_8 = puVar4[0xc];
        }
      }
      else {
        iVar2 = __stricmp(*puVar4,"serviceId");
        if (iVar2 == 0) {
          if (local_10 == 0) {
            local_10 = puVar4[0xc];
          }
        }
        else {
          iVar2 = __stricmp(*puVar4,"controlURL");
          if ((iVar2 == 0) && (local_c == (char *)0x0)) {
            local_c = (char *)puVar4[0xc];
          }
        }
      }
      param_1 = param_1 + 0x34;
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(iVar1 + 0x10));
    if (((local_8 != 0) && (local_10 != 0)) && (local_c != (char *)0x0)) {
      iVar2 = __stricmp(local_8,"urn:schemas-upnp-org:service:WANIPConnection:1");
      if (iVar2 != 0) {
        iVar2 = __stricmp(local_8,"urn:schemas-upnp-org:service:WANPPPConnection:1");
        if (iVar2 != 0) {
          return;
        }
        *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0xb8) + 0x50) + 0x1d0) = 1;
      }
      *(undefined4 *)(iVar1 + 0x14) = 1;
      *param_4 = 0;
      _strncpy((char *)(param_2 + 8),local_c,0x1ff);
    }
  }
  return;
}
