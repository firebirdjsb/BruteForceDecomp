/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9652249BDBD7DB1D002357EDD29E43AB17E48EFDB192592084AC6F5A77C415C7
 * Entry: 0x00200760, Ghidra index: 7253, label: FUN_00200760
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
char FUN_00200760(undefined4 param_1,int *param_2,undefined4 *param_3)

{
  char cVar1;
  int in_ECX;
  char cVar2;
  
  cVar1 = FUN_001fedb0(param_1,param_2,param_3);
  if (cVar1 == '\0') {
    cVar2 = (char)param_1;
    if (*param_2 == -0x17bae799) {
      if (cVar2 == '\0') {
        *(undefined4 *)(in_ECX + 0x40) = *param_3;
      }
      else {
        *param_3 = *(undefined4 *)(in_ECX + 0x40);
      }
      cVar1 = '\x01';
    }
    if (cVar1 == '\0') {
      if (*param_2 == -0x57f09fb) {
        if (cVar2 == '\0') {
          *(undefined4 *)(in_ECX + 0x44) = *param_3;
        }
        else {
          *param_3 = *(undefined4 *)(in_ECX + 0x44);
        }
        cVar1 = '\x01';
      }
      if ((cVar1 == '\0') && (*param_2 == -0x1599272d)) {
        if (cVar2 != '\0') {
          *param_3 = *(undefined4 *)(in_ECX + 0x48);
          return '\x01';
        }
        *(undefined4 *)(in_ECX + 0x48) = *param_3;
        cVar1 = '\x01';
      }
    }
  }
  return cVar1;
}
