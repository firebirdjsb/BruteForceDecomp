/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 57854FD4A94338D76025D0A383CF277792D78CC6F1BDF2B4F7881FE4BD842116
 * Entry: 0x002014a0, Ghidra index: 7259, label: FUN_002014a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Callee 0x001FEDB0 views this existing DWORD buffer bytewise.
 * reinterpret_cast preserves the source buffer address and does not
 * translate guest VAs to host memory. Original Xbox ABI_UNVERIFIED. */
extern char FUN_001fedb0(undefined4 flag, int *key, byte *data);
char FUN_002014a0(undefined4 param_1,int *param_2,undefined4 *param_3)

{
  char cVar1;
  int in_ECX;
  char cVar2;
  undefined4 *puVar3;
  
  cVar1 = FUN_001fedb0(param_1,param_2,reinterpret_cast<byte *>(param_3));
  if (cVar1 == '\0') {
    cVar2 = (char)param_1;
    if (*param_2 == 0x1f2e2943) {
      if (cVar2 == '\0') {
        *(undefined4 *)(in_ECX + 0x40) = *param_3;
      }
      else {
        *param_3 = *(undefined4 *)(in_ECX + 0x40);
      }
      cVar1 = '\x01';
    }
    if ((cVar1 == '\0') && (*param_2 == 0x5fb3c3b)) {
      if (cVar2 == '\0') {
        *(undefined4 *)(in_ECX + 0x44) = *param_3;
      }
      else {
        *param_3 = *(undefined4 *)(in_ECX + 0x44);
      }
      cVar1 = '\x01';
    }
    if (cVar1 == '\0') {
      if (*param_2 == 0xe162d6d) {
        puVar3 = param_3;
        if (cVar2 != '\0') {
          puVar3 = (undefined4 *)(in_ECX + 0x4c);
        }
        FUN_0001f4f0(puVar3,0,0xffffffff);
        cVar1 = '\x01';
      }
      if ((cVar1 == '\0') && (*param_2 == 0xec3acad)) {
        if (cVar2 != '\0') {
          *(undefined1 *)param_3 = *(undefined1 *)(in_ECX + 0x68);
          return '\x01';
        }
        *(undefined1 *)(in_ECX + 0x68) = *(undefined1 *)param_3;
        cVar1 = '\x01';
      }
    }
  }
  return cVar1;
}
