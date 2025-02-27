﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/glue/model/CatalogSchemaChangePolicy.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Glue
{
namespace Model
{

  /**
   * <p>Specifies a target that writes to a Hudi data source in the Glue Data
   * Catalog.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/S3HudiCatalogTarget">AWS
   * API Reference</a></p>
   */
  class S3HudiCatalogTarget
  {
  public:
    AWS_GLUE_API S3HudiCatalogTarget();
    AWS_GLUE_API S3HudiCatalogTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API S3HudiCatalogTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the data target.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the data target.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the data target.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the data target.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the data target.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the data target.</p>
     */
    inline S3HudiCatalogTarget& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the data target.</p>
     */
    inline S3HudiCatalogTarget& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the data target.</p>
     */
    inline S3HudiCatalogTarget& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInputs() const{ return m_inputs; }

    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline bool InputsHasBeenSet() const { return m_inputsHasBeenSet; }

    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline void SetInputs(const Aws::Vector<Aws::String>& value) { m_inputsHasBeenSet = true; m_inputs = value; }

    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline void SetInputs(Aws::Vector<Aws::String>&& value) { m_inputsHasBeenSet = true; m_inputs = std::move(value); }

    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline S3HudiCatalogTarget& WithInputs(const Aws::Vector<Aws::String>& value) { SetInputs(value); return *this;}

    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline S3HudiCatalogTarget& WithInputs(Aws::Vector<Aws::String>&& value) { SetInputs(std::move(value)); return *this;}

    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline S3HudiCatalogTarget& AddInputs(const Aws::String& value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }

    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline S3HudiCatalogTarget& AddInputs(Aws::String&& value) { m_inputsHasBeenSet = true; m_inputs.push_back(std::move(value)); return *this; }

    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline S3HudiCatalogTarget& AddInputs(const char* value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }


    /**
     * <p>Specifies native partitioning using a sequence of keys.</p>
     */
    inline const Aws::Vector<Aws::Vector<Aws::String>>& GetPartitionKeys() const{ return m_partitionKeys; }

    /**
     * <p>Specifies native partitioning using a sequence of keys.</p>
     */
    inline bool PartitionKeysHasBeenSet() const { return m_partitionKeysHasBeenSet; }

    /**
     * <p>Specifies native partitioning using a sequence of keys.</p>
     */
    inline void SetPartitionKeys(const Aws::Vector<Aws::Vector<Aws::String>>& value) { m_partitionKeysHasBeenSet = true; m_partitionKeys = value; }

    /**
     * <p>Specifies native partitioning using a sequence of keys.</p>
     */
    inline void SetPartitionKeys(Aws::Vector<Aws::Vector<Aws::String>>&& value) { m_partitionKeysHasBeenSet = true; m_partitionKeys = std::move(value); }

    /**
     * <p>Specifies native partitioning using a sequence of keys.</p>
     */
    inline S3HudiCatalogTarget& WithPartitionKeys(const Aws::Vector<Aws::Vector<Aws::String>>& value) { SetPartitionKeys(value); return *this;}

    /**
     * <p>Specifies native partitioning using a sequence of keys.</p>
     */
    inline S3HudiCatalogTarget& WithPartitionKeys(Aws::Vector<Aws::Vector<Aws::String>>&& value) { SetPartitionKeys(std::move(value)); return *this;}

    /**
     * <p>Specifies native partitioning using a sequence of keys.</p>
     */
    inline S3HudiCatalogTarget& AddPartitionKeys(const Aws::Vector<Aws::String>& value) { m_partitionKeysHasBeenSet = true; m_partitionKeys.push_back(value); return *this; }

    /**
     * <p>Specifies native partitioning using a sequence of keys.</p>
     */
    inline S3HudiCatalogTarget& AddPartitionKeys(Aws::Vector<Aws::String>&& value) { m_partitionKeysHasBeenSet = true; m_partitionKeys.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of the table in the database to write to.</p>
     */
    inline const Aws::String& GetTable() const{ return m_table; }

    /**
     * <p>The name of the table in the database to write to.</p>
     */
    inline bool TableHasBeenSet() const { return m_tableHasBeenSet; }

    /**
     * <p>The name of the table in the database to write to.</p>
     */
    inline void SetTable(const Aws::String& value) { m_tableHasBeenSet = true; m_table = value; }

    /**
     * <p>The name of the table in the database to write to.</p>
     */
    inline void SetTable(Aws::String&& value) { m_tableHasBeenSet = true; m_table = std::move(value); }

    /**
     * <p>The name of the table in the database to write to.</p>
     */
    inline void SetTable(const char* value) { m_tableHasBeenSet = true; m_table.assign(value); }

    /**
     * <p>The name of the table in the database to write to.</p>
     */
    inline S3HudiCatalogTarget& WithTable(const Aws::String& value) { SetTable(value); return *this;}

    /**
     * <p>The name of the table in the database to write to.</p>
     */
    inline S3HudiCatalogTarget& WithTable(Aws::String&& value) { SetTable(std::move(value)); return *this;}

    /**
     * <p>The name of the table in the database to write to.</p>
     */
    inline S3HudiCatalogTarget& WithTable(const char* value) { SetTable(value); return *this;}


    /**
     * <p>The name of the database to write to.</p>
     */
    inline const Aws::String& GetDatabase() const{ return m_database; }

    /**
     * <p>The name of the database to write to.</p>
     */
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }

    /**
     * <p>The name of the database to write to.</p>
     */
    inline void SetDatabase(const Aws::String& value) { m_databaseHasBeenSet = true; m_database = value; }

    /**
     * <p>The name of the database to write to.</p>
     */
    inline void SetDatabase(Aws::String&& value) { m_databaseHasBeenSet = true; m_database = std::move(value); }

    /**
     * <p>The name of the database to write to.</p>
     */
    inline void SetDatabase(const char* value) { m_databaseHasBeenSet = true; m_database.assign(value); }

    /**
     * <p>The name of the database to write to.</p>
     */
    inline S3HudiCatalogTarget& WithDatabase(const Aws::String& value) { SetDatabase(value); return *this;}

    /**
     * <p>The name of the database to write to.</p>
     */
    inline S3HudiCatalogTarget& WithDatabase(Aws::String&& value) { SetDatabase(std::move(value)); return *this;}

    /**
     * <p>The name of the database to write to.</p>
     */
    inline S3HudiCatalogTarget& WithDatabase(const char* value) { SetDatabase(value); return *this;}


    /**
     * <p>Specifies additional connection options for the connector.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAdditionalOptions() const{ return m_additionalOptions; }

    /**
     * <p>Specifies additional connection options for the connector.</p>
     */
    inline bool AdditionalOptionsHasBeenSet() const { return m_additionalOptionsHasBeenSet; }

    /**
     * <p>Specifies additional connection options for the connector.</p>
     */
    inline void SetAdditionalOptions(const Aws::Map<Aws::String, Aws::String>& value) { m_additionalOptionsHasBeenSet = true; m_additionalOptions = value; }

    /**
     * <p>Specifies additional connection options for the connector.</p>
     */
    inline void SetAdditionalOptions(Aws::Map<Aws::String, Aws::String>&& value) { m_additionalOptionsHasBeenSet = true; m_additionalOptions = std::move(value); }

    /**
     * <p>Specifies additional connection options for the connector.</p>
     */
    inline S3HudiCatalogTarget& WithAdditionalOptions(const Aws::Map<Aws::String, Aws::String>& value) { SetAdditionalOptions(value); return *this;}

    /**
     * <p>Specifies additional connection options for the connector.</p>
     */
    inline S3HudiCatalogTarget& WithAdditionalOptions(Aws::Map<Aws::String, Aws::String>&& value) { SetAdditionalOptions(std::move(value)); return *this;}

    /**
     * <p>Specifies additional connection options for the connector.</p>
     */
    inline S3HudiCatalogTarget& AddAdditionalOptions(const Aws::String& key, const Aws::String& value) { m_additionalOptionsHasBeenSet = true; m_additionalOptions.emplace(key, value); return *this; }

    /**
     * <p>Specifies additional connection options for the connector.</p>
     */
    inline S3HudiCatalogTarget& AddAdditionalOptions(Aws::String&& key, const Aws::String& value) { m_additionalOptionsHasBeenSet = true; m_additionalOptions.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specifies additional connection options for the connector.</p>
     */
    inline S3HudiCatalogTarget& AddAdditionalOptions(const Aws::String& key, Aws::String&& value) { m_additionalOptionsHasBeenSet = true; m_additionalOptions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies additional connection options for the connector.</p>
     */
    inline S3HudiCatalogTarget& AddAdditionalOptions(Aws::String&& key, Aws::String&& value) { m_additionalOptionsHasBeenSet = true; m_additionalOptions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Specifies additional connection options for the connector.</p>
     */
    inline S3HudiCatalogTarget& AddAdditionalOptions(const char* key, Aws::String&& value) { m_additionalOptionsHasBeenSet = true; m_additionalOptions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies additional connection options for the connector.</p>
     */
    inline S3HudiCatalogTarget& AddAdditionalOptions(Aws::String&& key, const char* value) { m_additionalOptionsHasBeenSet = true; m_additionalOptions.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specifies additional connection options for the connector.</p>
     */
    inline S3HudiCatalogTarget& AddAdditionalOptions(const char* key, const char* value) { m_additionalOptionsHasBeenSet = true; m_additionalOptions.emplace(key, value); return *this; }


    
    inline const CatalogSchemaChangePolicy& GetSchemaChangePolicy() const{ return m_schemaChangePolicy; }

    
    inline bool SchemaChangePolicyHasBeenSet() const { return m_schemaChangePolicyHasBeenSet; }

    
    inline void SetSchemaChangePolicy(const CatalogSchemaChangePolicy& value) { m_schemaChangePolicyHasBeenSet = true; m_schemaChangePolicy = value; }

    
    inline void SetSchemaChangePolicy(CatalogSchemaChangePolicy&& value) { m_schemaChangePolicyHasBeenSet = true; m_schemaChangePolicy = std::move(value); }

    
    inline S3HudiCatalogTarget& WithSchemaChangePolicy(const CatalogSchemaChangePolicy& value) { SetSchemaChangePolicy(value); return *this;}

    
    inline S3HudiCatalogTarget& WithSchemaChangePolicy(CatalogSchemaChangePolicy&& value) { SetSchemaChangePolicy(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_inputs;
    bool m_inputsHasBeenSet = false;

    Aws::Vector<Aws::Vector<Aws::String>> m_partitionKeys;
    bool m_partitionKeysHasBeenSet = false;

    Aws::String m_table;
    bool m_tableHasBeenSet = false;

    Aws::String m_database;
    bool m_databaseHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_additionalOptions;
    bool m_additionalOptionsHasBeenSet = false;

    CatalogSchemaChangePolicy m_schemaChangePolicy;
    bool m_schemaChangePolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
