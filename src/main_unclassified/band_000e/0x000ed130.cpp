/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 23502A0DA420E47D1C111A0647C6EFA3EF213F5C4999E6FAFF40B9BC87CDF40A
 * Entry: 0x000ed130, Ghidra index: 2947, label: FUN_000ed130
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
char FUN_000ed130(undefined4 param_1,int *param_2,undefined4 *param_3)

{
  char cVar1;
  int in_ECX;
  char cVar2;
  
  cVar1 = FUN_000ed030(param_1,param_2,param_3);
  if (cVar1 == '\0') {
    cVar2 = (char)param_1;
    if (*param_2 == -0xf5a9d69) {
      if (cVar2 == '\0') {
        *(undefined4 *)(in_ECX + 100) = *param_3;
      }
      else {
        *param_3 = *(undefined4 *)(in_ECX + 100);
      }
      cVar1 = '\x01';
    }
    if (cVar1 == '\0') {
      if (*param_2 == 0x1fd61e53) {
        if (cVar2 == '\0') {
          *(undefined4 *)(in_ECX + 0x68) = *param_3;
        }
        else {
          *param_3 = *(undefined4 *)(in_ECX + 0x68);
        }
        cVar1 = '\x01';
      }
      if (cVar1 == '\0') {
        if (*param_2 == -0xd757d14) {
          if (cVar2 == '\0') {
            *(undefined4 *)(in_ECX + 0x6c) = *param_3;
          }
          else {
            *param_3 = *(undefined4 *)(in_ECX + 0x6c);
          }
          cVar1 = '\x01';
        }
        if (cVar1 == '\0') {
          if (*param_2 == 0x1e79570e) {
            if (cVar2 == '\0') {
              *(undefined4 *)(in_ECX + 0x70) = *param_3;
            }
            else {
              *param_3 = *(undefined4 *)(in_ECX + 0x70);
            }
            cVar1 = '\x01';
          }
          if (cVar1 == '\0') {
            if (*param_2 == 0x989f634) {
              if (cVar2 == '\0') {
                *(undefined4 *)(in_ECX + 0x74) = *param_3;
              }
              else {
                *param_3 = *(undefined4 *)(in_ECX + 0x74);
              }
              cVar1 = '\x01';
            }
            if (cVar1 == '\0') {
              if (*param_2 == 0xa08b9e9) {
                if (cVar2 == '\0') {
                  *(undefined4 *)(in_ECX + 0x78) = *param_3;
                }
                else {
                  *param_3 = *(undefined4 *)(in_ECX + 0x78);
                }
                cVar1 = '\x01';
              }
              if (cVar1 == '\0') {
                if (*param_2 == 0xb5444a9) {
                  if (cVar2 == '\0') {
                    *(undefined4 *)(in_ECX + 0x7c) = *param_3;
                  }
                  else {
                    *param_3 = *(undefined4 *)(in_ECX + 0x7c);
                  }
                  cVar1 = '\x01';
                }
                if (cVar1 == '\0') {
                  if (*param_2 == -0x10b424d7) {
                    if (cVar2 == '\0') {
                      *(undefined4 *)(in_ECX + 0x80) = *param_3;
                    }
                    else {
                      *param_3 = *(undefined4 *)(in_ECX + 0x80);
                    }
                    cVar1 = '\x01';
                  }
                  if (cVar1 == '\0') {
                    if (*param_2 == -0x1b43adc) {
                      if (cVar2 == '\0') {
                        *(undefined4 *)(in_ECX + 0x84) = *param_3;
                      }
                      else {
                        *param_3 = *(undefined4 *)(in_ECX + 0x84);
                      }
                      cVar1 = '\x01';
                    }
                    if (cVar1 == '\0') {
                      if (*param_2 == -0x118bad07) {
                        if (cVar2 == '\0') {
                          *(undefined4 *)(in_ECX + 0x88) = *param_3;
                        }
                        else {
                          *param_3 = *(undefined4 *)(in_ECX + 0x88);
                        }
                        cVar1 = '\x01';
                      }
                      if ((cVar1 == '\0') && (*param_2 == 0x13a9a196)) {
                        if (cVar2 != '\0') {
                          *param_3 = *(undefined4 *)(in_ECX + 0x8c);
                          return '\x01';
                        }
                        *(undefined4 *)(in_ECX + 0x8c) = *param_3;
                        cVar1 = '\x01';
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return cVar1;
}
