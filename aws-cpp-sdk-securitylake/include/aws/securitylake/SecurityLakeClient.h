﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securitylake/SecurityLakeServiceClientModel.h>

namespace Aws
{
namespace SecurityLake
{
  /**
   *  <p>Amazon Security Lake is in preview release. Your use of the Security
   * Lake preview is subject to Section 2 of the <a
   * href="http://aws.amazon.com/service-terms/">Amazon Web Services Service
   * Terms</a>("Betas and Previews").</p>  <p>Amazon Security Lake is a fully
   * managed security data lake service. You can use Security Lake to automatically
   * centralize security data from cloud, on-premises, and custom sources into a data
   * lake that's stored in your Amazon Web Servicesaccount. Amazon Web Services
   * Organizations is an account management service that lets you consolidate
   * multiple Amazon Web Services accounts into an organization that you create and
   * centrally manage. With Organizations, you can create member accounts and invite
   * existing accounts to join your organization. Security Lake helps you analyze
   * security data for a more complete understanding of your security posture across
   * the entire organization. It can also help you improve the protection of your
   * workloads, applications, and data.</p> <p>The data lake is backed by Amazon
   * Simple Storage Service (Amazon S3) buckets, and you retain ownership over your
   * data. </p> <p>Amazon Security Lake integrates with CloudTrail, a service that
   * provides a record of actions taken by a user, role, or an Amazon Web Services
   * service in Security Lake CloudTrail captures API calls for Security Lake as
   * events. The calls captured include calls from the Security Lake console and code
   * calls to the Security Lake API operations. If you create a trail, you can enable
   * continuous delivery of CloudTrail events to an Amazon S3 bucket, including
   * events for Security Lake. If you don't configure a trail, you can still view the
   * most recent events in the CloudTrail console in Event history. Using the
   * information collected by CloudTrail you can determine the request that was made
   * to Security Lake, the IP address from which the request was made, who made the
   * request, when it was made, and additional details. To learn more about Security
   * Lake information in CloudTrail, see the <a
   * href="https://docs.aws.amazon.com/security-lake/latest/userguide/securitylake-cloudtrail.html">Amazon
   * Security Lake User Guide</a>.</p> <p>Security Lake automates the collection of
   * security-related log and event data from integrated Amazon Web Services and
   * third-party services. It also helps you manage the lifecycle of data with
   * customizable retention and replication settings. Security Lake converts ingested
   * data into Apache Parquet format and a standard open-source schema called the
   * Open Cybersecurity Schema Framework (OCSF).</p> <p>Other Amazon Web Services and
   * third-party services can subscribe to the data that's stored in Security Lake
   * for incident response and security data analytics.</p>
   */
  class AWS_SECURITYLAKE_API SecurityLakeClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<SecurityLakeClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SecurityLakeClient(const Aws::SecurityLake::SecurityLakeClientConfiguration& clientConfiguration = Aws::SecurityLake::SecurityLakeClientConfiguration(),
                           std::shared_ptr<SecurityLakeEndpointProviderBase> endpointProvider = Aws::MakeShared<SecurityLakeEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SecurityLakeClient(const Aws::Auth::AWSCredentials& credentials,
                           std::shared_ptr<SecurityLakeEndpointProviderBase> endpointProvider = Aws::MakeShared<SecurityLakeEndpointProvider>(ALLOCATION_TAG),
                           const Aws::SecurityLake::SecurityLakeClientConfiguration& clientConfiguration = Aws::SecurityLake::SecurityLakeClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SecurityLakeClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<SecurityLakeEndpointProviderBase> endpointProvider = Aws::MakeShared<SecurityLakeEndpointProvider>(ALLOCATION_TAG),
                           const Aws::SecurityLake::SecurityLakeClientConfiguration& clientConfiguration = Aws::SecurityLake::SecurityLakeClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SecurityLakeClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SecurityLakeClient(const Aws::Auth::AWSCredentials& credentials,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SecurityLakeClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~SecurityLakeClient();

        /**
         * <p>Adds a natively supported Amazon Web Service as an Amazon Security Lake
         * source. Enables source types for member accounts in required Amazon Web Services
         * Regions, based on the parameters you specify. You can choose any source type in
         * any Region for either accounts that are part of a trusted organization or
         * standalone accounts. At least one of the three dimensions is a mandatory input
         * to this API. However, you can supply any combination of the three dimensions to
         * this API. </p> <p>By default, a dimension refers to the entire set. When you
         * don't provide a dimension, Security Lake assumes that the missing dimension
         * refers to the entire set. This is overridden when you supply any one of the
         * inputs. For instance, when you do not specify members, the API enables all
         * Security Lake member accounts for all sources. Similarly, when you do not
         * specify Regions, Security Lake is enabled for all the Regions where Security
         * Lake is available as a service.</p> <p>You can use this API only to enable
         * natively supported Amazon Web Services as a source. Use
         * <code>CreateCustomLogSource</code> to enable data collection from a custom
         * source. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/CreateAwsLogSource">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAwsLogSourceOutcome CreateAwsLogSource(const Model::CreateAwsLogSourceRequest& request) const;

        /**
         * A Callable wrapper for CreateAwsLogSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAwsLogSourceOutcomeCallable CreateAwsLogSourceCallable(const Model::CreateAwsLogSourceRequest& request) const;

        /**
         * An Async wrapper for CreateAwsLogSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAwsLogSourceAsync(const Model::CreateAwsLogSourceRequest& request, const CreateAwsLogSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds a third-party custom source in Amazon Security Lake, from the Amazon Web
         * Services Region where you want to create a custom source. Security Lake can
         * collect logs and events from third-party custom sources. After creating the
         * appropriate IAM role to invoke Glue crawler, use this API to add a custom source
         * name in Security Lake. This operation creates a partition in the Amazon S3
         * bucket for Security Lake as the target location for log files from the custom
         * source in addition to an associated Glue table and an Glue
         * crawler.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/CreateCustomLogSource">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCustomLogSourceOutcome CreateCustomLogSource(const Model::CreateCustomLogSourceRequest& request) const;

        /**
         * A Callable wrapper for CreateCustomLogSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCustomLogSourceOutcomeCallable CreateCustomLogSourceCallable(const Model::CreateCustomLogSourceRequest& request) const;

        /**
         * An Async wrapper for CreateCustomLogSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCustomLogSourceAsync(const Model::CreateCustomLogSourceRequest& request, const CreateCustomLogSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Initializes an Amazon Security Lake instance with the provided (or default)
         * configuration. You can enable Security Lake in Amazon Web Services Regions with
         * customized settings before enabling log collection in Regions. You can either
         * use the <code>enableAll</code> parameter to specify all Regions or specify the
         * Regions where you want to enable Security Lake. To specify particular Regions,
         * use the <code>Regions</code> parameter and then configure these Regions using
         * the <code>configurations</code> parameter. If you have already enabled Security
         * Lake in a Region when you call this command, the command will update the Region
         * if you provide new configuration parameters. If you have not already enabled
         * Security Lake in the Region when you call this API, it will set up the data lake
         * in the Region with the specified configurations.</p> <p>When you enable Security
         * Lake, it starts ingesting security data after the
         * <code>CreateAwsLogSource</code> call. This includes ingesting security data from
         * sources, storing data, and making data accessible to subscribers. Security Lake
         * also enables all the existing settings and resources that it stores or maintains
         * for your Amazon Web Services account in the current Region, including security
         * log and event data. For more information, see the <a
         * href="https://docs.aws.amazon.com/security-lake/latest/userguide/what-is-security-lake.html">Amazon
         * Security Lake User Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/CreateDatalake">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDatalakeOutcome CreateDatalake(const Model::CreateDatalakeRequest& request) const;

        /**
         * A Callable wrapper for CreateDatalake that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDatalakeOutcomeCallable CreateDatalakeCallable(const Model::CreateDatalakeRequest& request) const;

        /**
         * An Async wrapper for CreateDatalake that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDatalakeAsync(const Model::CreateDatalakeRequest& request, const CreateDatalakeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Automatically enables Amazon Security Lake for new member accounts in your
         * organization. Security Lake is not automatically enabled for any existing member
         * accounts in your organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/CreateDatalakeAutoEnable">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDatalakeAutoEnableOutcome CreateDatalakeAutoEnable(const Model::CreateDatalakeAutoEnableRequest& request) const;

        /**
         * A Callable wrapper for CreateDatalakeAutoEnable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDatalakeAutoEnableOutcomeCallable CreateDatalakeAutoEnableCallable(const Model::CreateDatalakeAutoEnableRequest& request) const;

        /**
         * An Async wrapper for CreateDatalakeAutoEnable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDatalakeAutoEnableAsync(const Model::CreateDatalakeAutoEnableRequest& request, const CreateDatalakeAutoEnableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Designates the Amazon Security Lake delegated administrator account for the
         * organization. This API can only be called by the organization management
         * account. The organization management account cannot be the delegated
         * administrator account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/CreateDatalakeDelegatedAdmin">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDatalakeDelegatedAdminOutcome CreateDatalakeDelegatedAdmin(const Model::CreateDatalakeDelegatedAdminRequest& request) const;

        /**
         * A Callable wrapper for CreateDatalakeDelegatedAdmin that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDatalakeDelegatedAdminOutcomeCallable CreateDatalakeDelegatedAdminCallable(const Model::CreateDatalakeDelegatedAdminRequest& request) const;

        /**
         * An Async wrapper for CreateDatalakeDelegatedAdmin that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDatalakeDelegatedAdminAsync(const Model::CreateDatalakeDelegatedAdminRequest& request, const CreateDatalakeDelegatedAdminResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates the specified notification subscription in Amazon Security Lake for
         * the organization you specify.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/CreateDatalakeExceptionsSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDatalakeExceptionsSubscriptionOutcome CreateDatalakeExceptionsSubscription(const Model::CreateDatalakeExceptionsSubscriptionRequest& request) const;

        /**
         * A Callable wrapper for CreateDatalakeExceptionsSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDatalakeExceptionsSubscriptionOutcomeCallable CreateDatalakeExceptionsSubscriptionCallable(const Model::CreateDatalakeExceptionsSubscriptionRequest& request) const;

        /**
         * An Async wrapper for CreateDatalakeExceptionsSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDatalakeExceptionsSubscriptionAsync(const Model::CreateDatalakeExceptionsSubscriptionRequest& request, const CreateDatalakeExceptionsSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a subscription permission for accounts that are already enabled in
         * Amazon Security Lake. You can create a subscriber with access to data in the
         * current Amazon Web Services Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/CreateSubscriber">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSubscriberOutcome CreateSubscriber(const Model::CreateSubscriberRequest& request) const;

        /**
         * A Callable wrapper for CreateSubscriber that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSubscriberOutcomeCallable CreateSubscriberCallable(const Model::CreateSubscriberRequest& request) const;

        /**
         * An Async wrapper for CreateSubscriber that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSubscriberAsync(const Model::CreateSubscriberRequest& request, const CreateSubscriberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Notifies the subscriber when new data is written to the data lake for the
         * sources that the subscriber consumes in Security Lake.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/CreateSubscriptionNotificationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSubscriptionNotificationConfigurationOutcome CreateSubscriptionNotificationConfiguration(const Model::CreateSubscriptionNotificationConfigurationRequest& request) const;

        /**
         * A Callable wrapper for CreateSubscriptionNotificationConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSubscriptionNotificationConfigurationOutcomeCallable CreateSubscriptionNotificationConfigurationCallable(const Model::CreateSubscriptionNotificationConfigurationRequest& request) const;

        /**
         * An Async wrapper for CreateSubscriptionNotificationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSubscriptionNotificationConfigurationAsync(const Model::CreateSubscriptionNotificationConfigurationRequest& request, const CreateSubscriptionNotificationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a natively supported Amazon Web Service as an Amazon Security Lake
         * source. When you remove the source, Security Lake stops collecting data from
         * that source, and subscribers can no longer consume new data from the source.
         * Subscribers can still consume data that Security Lake collected from the source
         * before disablement.</p> <p>You can choose any source type in any Amazon Web
         * Services Region for either accounts that are part of a trusted organization or
         * standalone accounts. At least one of the three dimensions is a mandatory input
         * to this API. However, you can supply any combination of the three dimensions to
         * this API. </p> <p>By default, a dimension refers to the entire set. This is
         * overridden when you supply any one of the inputs. For instance, when you do not
         * specify members, the API disables all Security Lake member accounts for sources.
         * Similarly, when you do not specify Regions, Security Lake is disabled for all
         * the Regions where Security Lake is available as a service.</p> <p>When you don't
         * provide a dimension, Security Lake assumes that the missing dimension refers to
         * the entire set. For example, if you don't provide specific accounts, the API
         * applies to the entire set of accounts in your organization.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/DeleteAwsLogSource">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAwsLogSourceOutcome DeleteAwsLogSource(const Model::DeleteAwsLogSourceRequest& request) const;

        /**
         * A Callable wrapper for DeleteAwsLogSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAwsLogSourceOutcomeCallable DeleteAwsLogSourceCallable(const Model::DeleteAwsLogSourceRequest& request) const;

        /**
         * An Async wrapper for DeleteAwsLogSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAwsLogSourceAsync(const Model::DeleteAwsLogSourceRequest& request, const DeleteAwsLogSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a custom log source from Amazon Security Lake.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/DeleteCustomLogSource">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCustomLogSourceOutcome DeleteCustomLogSource(const Model::DeleteCustomLogSourceRequest& request) const;

        /**
         * A Callable wrapper for DeleteCustomLogSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCustomLogSourceOutcomeCallable DeleteCustomLogSourceCallable(const Model::DeleteCustomLogSourceRequest& request) const;

        /**
         * An Async wrapper for DeleteCustomLogSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCustomLogSourceAsync(const Model::DeleteCustomLogSourceRequest& request, const DeleteCustomLogSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>When you delete Amazon Security Lake from your account, Security Lake is
         * disabled in all Amazon Web Services Regions. Also, this API automatically takes
         * steps to remove the account from Security Lake . </p> <p>This operation disables
         * security data collection from sources, deletes data stored, and stops making
         * data accessible to subscribers. Security Lake also deletes all the existing
         * settings and resources that it stores or maintains for your Amazon Web Services
         * account in the current Region, including security log and event data. The
         * <code>DeleteDatalake</code> operation does not delete the Amazon S3 bucket,
         * which is owned by your Amazon Web Services account. For more information, see
         * the <a
         * href="https://docs.aws.amazon.com/security-lake/latest/userguide/disable-security-lake.html">Amazon
         * Security Lake User Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/DeleteDatalake">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDatalakeOutcome DeleteDatalake(const Model::DeleteDatalakeRequest& request) const;

        /**
         * A Callable wrapper for DeleteDatalake that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDatalakeOutcomeCallable DeleteDatalakeCallable(const Model::DeleteDatalakeRequest& request) const;

        /**
         * An Async wrapper for DeleteDatalake that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDatalakeAsync(const Model::DeleteDatalakeRequest& request, const DeleteDatalakeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Automatically deletes Amazon Security Lake to stop collecting security data.
         * When you delete Amazon Security Lake from your account, Security Lake is
         * disabled in all Regions. Also, this API automatically takes steps to remove the
         * account from Security Lake . </p> <p>This operation disables security data
         * collection from sources, deletes data stored, and stops making data accessible
         * to subscribers. Security Lake also deletes all the existing settings and
         * resources that it stores or maintains for your Amazon Web Services account in
         * the current Region, including security log and event data. The
         * <code>DeleteDatalake</code> operation does not delete the Amazon S3 bucket,
         * which is owned by your Amazon Web Services account. For more information, see
         * the <a
         * href="https://docs.aws.amazon.com/security-lake/latest/userguide/disable-security-lake.html">Amazon
         * Security Lake User Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/DeleteDatalakeAutoEnable">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDatalakeAutoEnableOutcome DeleteDatalakeAutoEnable(const Model::DeleteDatalakeAutoEnableRequest& request) const;

        /**
         * A Callable wrapper for DeleteDatalakeAutoEnable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDatalakeAutoEnableOutcomeCallable DeleteDatalakeAutoEnableCallable(const Model::DeleteDatalakeAutoEnableRequest& request) const;

        /**
         * An Async wrapper for DeleteDatalakeAutoEnable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDatalakeAutoEnableAsync(const Model::DeleteDatalakeAutoEnableRequest& request, const DeleteDatalakeAutoEnableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the Amazon Security Lake delegated administrator account for the
         * organization. This API can only be called by the organization management
         * account. The organization management account cannot be the delegated
         * administrator account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/DeleteDatalakeDelegatedAdmin">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDatalakeDelegatedAdminOutcome DeleteDatalakeDelegatedAdmin(const Model::DeleteDatalakeDelegatedAdminRequest& request) const;

        /**
         * A Callable wrapper for DeleteDatalakeDelegatedAdmin that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDatalakeDelegatedAdminOutcomeCallable DeleteDatalakeDelegatedAdminCallable(const Model::DeleteDatalakeDelegatedAdminRequest& request) const;

        /**
         * An Async wrapper for DeleteDatalakeDelegatedAdmin that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDatalakeDelegatedAdminAsync(const Model::DeleteDatalakeDelegatedAdminRequest& request, const DeleteDatalakeDelegatedAdminResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified notification subscription in Amazon Security Lake for
         * the organization you specify.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/DeleteDatalakeExceptionsSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDatalakeExceptionsSubscriptionOutcome DeleteDatalakeExceptionsSubscription(const Model::DeleteDatalakeExceptionsSubscriptionRequest& request) const;

        /**
         * A Callable wrapper for DeleteDatalakeExceptionsSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDatalakeExceptionsSubscriptionOutcomeCallable DeleteDatalakeExceptionsSubscriptionCallable(const Model::DeleteDatalakeExceptionsSubscriptionRequest& request) const;

        /**
         * An Async wrapper for DeleteDatalakeExceptionsSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDatalakeExceptionsSubscriptionAsync(const Model::DeleteDatalakeExceptionsSubscriptionRequest& request, const DeleteDatalakeExceptionsSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the subscription permission for accounts that are already enabled in
         * Amazon Security Lake. You can delete a subscriber and remove access to data in
         * the current Amazon Web Services Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/DeleteSubscriber">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSubscriberOutcome DeleteSubscriber(const Model::DeleteSubscriberRequest& request) const;

        /**
         * A Callable wrapper for DeleteSubscriber that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSubscriberOutcomeCallable DeleteSubscriberCallable(const Model::DeleteSubscriberRequest& request) const;

        /**
         * An Async wrapper for DeleteSubscriber that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSubscriberAsync(const Model::DeleteSubscriberRequest& request, const DeleteSubscriberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified notification subscription in Amazon Security Lake for
         * the organization you specify.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/DeleteSubscriptionNotificationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSubscriptionNotificationConfigurationOutcome DeleteSubscriptionNotificationConfiguration(const Model::DeleteSubscriptionNotificationConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteSubscriptionNotificationConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSubscriptionNotificationConfigurationOutcomeCallable DeleteSubscriptionNotificationConfigurationCallable(const Model::DeleteSubscriptionNotificationConfigurationRequest& request) const;

        /**
         * An Async wrapper for DeleteSubscriptionNotificationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSubscriptionNotificationConfigurationAsync(const Model::DeleteSubscriptionNotificationConfigurationRequest& request, const DeleteSubscriptionNotificationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the Amazon Security Lake configuration object for the specified
         * Amazon Web Services account ID. You can use the <code>GetDatalake</code> API to
         * know whether Security Lake is enabled for the current Region. This API does not
         * take input parameters. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/GetDatalake">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDatalakeOutcome GetDatalake(const Model::GetDatalakeRequest& request) const;

        /**
         * A Callable wrapper for GetDatalake that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDatalakeOutcomeCallable GetDatalakeCallable(const Model::GetDatalakeRequest& request) const;

        /**
         * An Async wrapper for GetDatalake that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDatalakeAsync(const Model::GetDatalakeRequest& request, const GetDatalakeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the configuration that will be automatically set up for accounts
         * added to the organization after the organization has onboarded to Amazon
         * Security Lake. This API does not take input parameters.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/GetDatalakeAutoEnable">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDatalakeAutoEnableOutcome GetDatalakeAutoEnable(const Model::GetDatalakeAutoEnableRequest& request) const;

        /**
         * A Callable wrapper for GetDatalakeAutoEnable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDatalakeAutoEnableOutcomeCallable GetDatalakeAutoEnableCallable(const Model::GetDatalakeAutoEnableRequest& request) const;

        /**
         * An Async wrapper for GetDatalakeAutoEnable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDatalakeAutoEnableAsync(const Model::GetDatalakeAutoEnableRequest& request, const GetDatalakeAutoEnableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the expiration period and time-to-live (TTL) for which the
         * exception message will remain. Exceptions are stored by default, for 2 weeks
         * from when a record was created in Amazon Security Lake. This API does not take
         * input parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/GetDatalakeExceptionsExpiry">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDatalakeExceptionsExpiryOutcome GetDatalakeExceptionsExpiry(const Model::GetDatalakeExceptionsExpiryRequest& request) const;

        /**
         * A Callable wrapper for GetDatalakeExceptionsExpiry that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDatalakeExceptionsExpiryOutcomeCallable GetDatalakeExceptionsExpiryCallable(const Model::GetDatalakeExceptionsExpiryRequest& request) const;

        /**
         * An Async wrapper for GetDatalakeExceptionsExpiry that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDatalakeExceptionsExpiryAsync(const Model::GetDatalakeExceptionsExpiryRequest& request, const GetDatalakeExceptionsExpiryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the details of exception notifications for the account in Amazon
         * Security Lake.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/GetDatalakeExceptionsSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDatalakeExceptionsSubscriptionOutcome GetDatalakeExceptionsSubscription(const Model::GetDatalakeExceptionsSubscriptionRequest& request) const;

        /**
         * A Callable wrapper for GetDatalakeExceptionsSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDatalakeExceptionsSubscriptionOutcomeCallable GetDatalakeExceptionsSubscriptionCallable(const Model::GetDatalakeExceptionsSubscriptionRequest& request) const;

        /**
         * An Async wrapper for GetDatalakeExceptionsSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDatalakeExceptionsSubscriptionAsync(const Model::GetDatalakeExceptionsSubscriptionRequest& request, const GetDatalakeExceptionsSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a snapshot of the current Region, including whether Amazon Security
         * Lake is enabled for those accounts and which sources Security Lake is collecting
         * data from. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/GetDatalakeStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDatalakeStatusOutcome GetDatalakeStatus(const Model::GetDatalakeStatusRequest& request) const;

        /**
         * A Callable wrapper for GetDatalakeStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDatalakeStatusOutcomeCallable GetDatalakeStatusCallable(const Model::GetDatalakeStatusRequest& request) const;

        /**
         * An Async wrapper for GetDatalakeStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDatalakeStatusAsync(const Model::GetDatalakeStatusRequest& request, const GetDatalakeStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the subscription information for the specified subscription ID. You
         * can get information about a specific subscriber.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/GetSubscriber">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSubscriberOutcome GetSubscriber(const Model::GetSubscriberRequest& request) const;

        /**
         * A Callable wrapper for GetSubscriber that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSubscriberOutcomeCallable GetSubscriberCallable(const Model::GetSubscriberRequest& request) const;

        /**
         * An Async wrapper for GetSubscriber that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSubscriberAsync(const Model::GetSubscriberRequest& request, const GetSubscriberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the Amazon Security Lake exceptions that you can use to find the source
         * of problems and fix them.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/ListDatalakeExceptions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDatalakeExceptionsOutcome ListDatalakeExceptions(const Model::ListDatalakeExceptionsRequest& request) const;

        /**
         * A Callable wrapper for ListDatalakeExceptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDatalakeExceptionsOutcomeCallable ListDatalakeExceptionsCallable(const Model::ListDatalakeExceptionsRequest& request) const;

        /**
         * An Async wrapper for ListDatalakeExceptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDatalakeExceptionsAsync(const Model::ListDatalakeExceptionsRequest& request, const ListDatalakeExceptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the log sources in the current Amazon Web Services Region.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/ListLogSources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLogSourcesOutcome ListLogSources(const Model::ListLogSourcesRequest& request) const;

        /**
         * A Callable wrapper for ListLogSources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListLogSourcesOutcomeCallable ListLogSourcesCallable(const Model::ListLogSourcesRequest& request) const;

        /**
         * An Async wrapper for ListLogSources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListLogSourcesAsync(const Model::ListLogSourcesRequest& request, const ListLogSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List all subscribers for the specific Amazon Security Lake account ID. You
         * can retrieve a list of subscriptions associated with a specific organization or
         * Amazon Web Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/ListSubscribers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSubscribersOutcome ListSubscribers(const Model::ListSubscribersRequest& request) const;

        /**
         * A Callable wrapper for ListSubscribers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSubscribersOutcomeCallable ListSubscribersCallable(const Model::ListSubscribersRequest& request) const;

        /**
         * An Async wrapper for ListSubscribers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSubscribersAsync(const Model::ListSubscribersRequest& request, const ListSubscribersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Specifies where to store your security data and for how long. You can add a
         * rollup Region to consolidate data from multiple Amazon Web Services Regions.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/UpdateDatalake">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDatalakeOutcome UpdateDatalake(const Model::UpdateDatalakeRequest& request) const;

        /**
         * A Callable wrapper for UpdateDatalake that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDatalakeOutcomeCallable UpdateDatalakeCallable(const Model::UpdateDatalakeRequest& request) const;

        /**
         * An Async wrapper for UpdateDatalake that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDatalakeAsync(const Model::UpdateDatalakeRequest& request, const UpdateDatalakeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update the expiration period for the exception message to your preferred
         * time, and control the time-to-live (TTL) for the exception message to remain.
         * Exceptions are stored by default for 2 weeks from when a record was created in
         * Amazon Security Lake. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/UpdateDatalakeExceptionsExpiry">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDatalakeExceptionsExpiryOutcome UpdateDatalakeExceptionsExpiry(const Model::UpdateDatalakeExceptionsExpiryRequest& request) const;

        /**
         * A Callable wrapper for UpdateDatalakeExceptionsExpiry that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDatalakeExceptionsExpiryOutcomeCallable UpdateDatalakeExceptionsExpiryCallable(const Model::UpdateDatalakeExceptionsExpiryRequest& request) const;

        /**
         * An Async wrapper for UpdateDatalakeExceptionsExpiry that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDatalakeExceptionsExpiryAsync(const Model::UpdateDatalakeExceptionsExpiryRequest& request, const UpdateDatalakeExceptionsExpiryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified notification subscription in Amazon Security Lake for
         * the organization you specify.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/UpdateDatalakeExceptionsSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDatalakeExceptionsSubscriptionOutcome UpdateDatalakeExceptionsSubscription(const Model::UpdateDatalakeExceptionsSubscriptionRequest& request) const;

        /**
         * A Callable wrapper for UpdateDatalakeExceptionsSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDatalakeExceptionsSubscriptionOutcomeCallable UpdateDatalakeExceptionsSubscriptionCallable(const Model::UpdateDatalakeExceptionsSubscriptionRequest& request) const;

        /**
         * An Async wrapper for UpdateDatalakeExceptionsSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDatalakeExceptionsSubscriptionAsync(const Model::UpdateDatalakeExceptionsSubscriptionRequest& request, const UpdateDatalakeExceptionsSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing subscription for the given Amazon Security Lake account
         * ID. You can update a subscriber by changing the sources that the subscriber
         * consumes data from. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/UpdateSubscriber">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSubscriberOutcome UpdateSubscriber(const Model::UpdateSubscriberRequest& request) const;

        /**
         * A Callable wrapper for UpdateSubscriber that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSubscriberOutcomeCallable UpdateSubscriberCallable(const Model::UpdateSubscriberRequest& request) const;

        /**
         * An Async wrapper for UpdateSubscriber that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSubscriberAsync(const Model::UpdateSubscriberRequest& request, const UpdateSubscriberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new subscription notification or adds the existing subscription
         * notification setting for the specified subscription ID.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/UpdateSubscriptionNotificationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSubscriptionNotificationConfigurationOutcome UpdateSubscriptionNotificationConfiguration(const Model::UpdateSubscriptionNotificationConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateSubscriptionNotificationConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSubscriptionNotificationConfigurationOutcomeCallable UpdateSubscriptionNotificationConfigurationCallable(const Model::UpdateSubscriptionNotificationConfigurationRequest& request) const;

        /**
         * An Async wrapper for UpdateSubscriptionNotificationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSubscriptionNotificationConfigurationAsync(const Model::UpdateSubscriptionNotificationConfigurationRequest& request, const UpdateSubscriptionNotificationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<SecurityLakeEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<SecurityLakeClient>;
      void init(const SecurityLakeClientConfiguration& clientConfiguration);

      SecurityLakeClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<SecurityLakeEndpointProviderBase> m_endpointProvider;
  };

} // namespace SecurityLake
} // namespace Aws
