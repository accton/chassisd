/*************************************************************
 *       Copyright 2016 Accton Technology Corporation.
 *
 * Licensed under the Eclipse Public License, Version 1.0 (the
 * "License"); you may not use this file except in compliance
 * with the License. You may obtain a copy of the License at
 *
 *        http://www.eclipse.org/legal/epl-v10.html
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
 * either express or implied. See the License for the specific
 * language governing permissions and limitations under the
 * License.
 *
 ************************************************************/

#include <stdlib.h>

void *xalloc(size_t size);
void *xalloc_nonzero(size_t size);
void *xrealloc(void *old, size_t size);
char *xstrdup(char *str);
void Enomem(void);
int asprintf(char **strp, const char *fmt, ...);
